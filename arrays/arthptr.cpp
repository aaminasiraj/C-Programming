# include <iostream>
using namespace std;

int main(void){

    int a = 10;
    int* ptr = &a;

    cout << ptr << endl;
    ptr = ptr + 2;            //adding memoory worth of 2 int => 8 bytes                     
                              //ptr--; //ptr++ ;   THESE ARE INCREMENT DECREMNTS 
                              //THEYLL GIVE YOU THE NEXT ADRESS ACC TO THE DATA TYPE
    cout << ptr << endl;
    

}