# include <iostream>
using namespace std;

int main(void){

    int a = 10;
    int* p = &a;
    int** q = &p;

cout << *p << endl;
cout << **q << endl;
cout << p << endl;
cout << *q << endl;

}