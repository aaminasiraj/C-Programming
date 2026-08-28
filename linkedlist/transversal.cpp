# include <iostream>
using namespace std;


struct Node{
    
        int data; // int
        Node* next; //pointer of the next space/bode 
    
        Node(int data1, Node* next1){ // construct
            data = data1;
            next = next1;
        }
        Node(int data1){
            data = data1;
            next = nullptr;
        }

}; 

Node* convertarrtoll(int arr[], int n){
    Node* head = new Node(arr[0]);
    Node* mover = head;
    for(int i = 1; i <n; i++){
        Node* temp = new Node(arr[i]);
        mover->next = temp; //connects
        mover = temp; //moves.
    }
    return head;
}

int main(){
    int arr[]={1,2,3,4,5};
    Node* head = convertarrtoll(arr, 5);
    Node* temp = head;                   // putting temo at head
    while(temp){                            // while the temp is on the node aka its not empty 
        cout << temp->data << endl;             // we'll print the datat hat is stored in temp at that point
        temp = temp->next;                          //
    }
}