# include <iostream>
using namespace std;

void reverseArr(int arr[], int size){

//  TWO POINTER APPROACH
    int start = 0, end = size -1;

    while (start <= end){
        swap(arr[start],arr[end]);
        start ++;
        end --;

    }
}


int main(void){

    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int i;
    int size = 10;

    reverseArr(arr, size);

    for( i = 0; i < 10; i ++){
        cout << arr[i] << " " ;
    }

    cout << endl;
    
}