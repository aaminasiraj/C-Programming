# include <iostream>
using namespace std;

struct Node{
    int data;
    Node* next;

    Node(int data1 ,Node* next1){
       data = data1;
       next = next1; 
    }
    Node(int data1 ){
       data = data1;
       next = nullptr; 
    }

};

Node* convertarrtoll(int arr[],int n){
    Node* head = new Node(arr[0]);
    Node* mover = head;
    for(int i = 1; i < n; i++){
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}

int lengthofll(Node* head){
    int counter = 0;
    Node* temp = head;                   
    while(temp){                                      
        temp = temp->next; 
        counter ++;                         
    }
    return counter;
}

int main(){
    int arr[]={1,2,3,4,6,5};
    Node* head = convertarrtoll(arr,6);
    cout << lengthofll(head) <<endl;
}