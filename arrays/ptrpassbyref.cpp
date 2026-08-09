# include <iostream>
using namespace std;

void changeA (int* ptr){
    *(ptr) = 20;
}

int main(void){

    int a = 10;
    changeA(&a);

    cout << a << endl;
}