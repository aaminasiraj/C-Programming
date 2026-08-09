# include <iostream>
using namespace std;

int main(void){

    int* ptr1;
    int* ptr2 = ptr1 + 2;

    cout << ptr2 - ptr1 << endl;
}

// basically when we subtract two pointers we get the no. of blocks of type (the resp datatype)
//basically how many ints (or resp data types ) can 
//be be stored betvennt hose two memory locations(ptrs)