# include <iostream>
using namespace std;

int main(void){

    float a = 10.987;
    float* pointer = &a;
    float** pointer2 = &pointer;
    float** ptrnull = NULL ;

    cout << pointer << endl;    // gives address of a.
    cout << &pointer << endl;   // gives adress of pointer
    cout << pointer2 << endl;   // gives adress of pointer 
    cout << *(&a) << endl;       // gives value stored in a. in this case * is called dereferencing opr
    cout << *(pointer) << endl;  // value at pointer 
    cout << ptrnull << endl;


}