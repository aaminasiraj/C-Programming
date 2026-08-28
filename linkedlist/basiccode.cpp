# include <iostream>
using namespace std;


struct node{
    
        int data; // int
        node* next; //pointer of the next space/bode 
    
        node(int data1, node* next1){ // construct
            data = data1;
            next = next1;
        }
}; // needs a semicolon

int main(){
    // node x = node(2, nullptr) // as you can see the node x takes 2 i/ps.
    // node* y = &x;  // this is the pointer to the node okay but beow is way to directly take the ptr.
    node* p = new node(2,nullptr); // here new is operation ised to create a new node. if we dont use nod ethat
    cout << p->data << endl; // this will print the ptr of the ndoe. // to print the data in it p->data.
}

// tonot write 