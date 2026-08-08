# include <iostream>
using namespace std;

int main(void){

    float arr[20], n;
    int i,  j;

    for( i = 0; i < 10; i ++){
        cout << "Enter Number:";
        cin >> arr[i];
    }

    cout << "Enter number you want the frequncy of: ";
    cin >> n;

    int count = 0;
    for (j = 0; j < 10; j ++){
        if (arr[j] == n){
            count ++;
        }
    }
    cout << "The Frequncy of the number " << n << " is " << count << endl ;
}