#include <iostream>
using namespace std;

int searchArr(int arr[], int size, int target){
    int i;
    for (i = 0; i < size; i ++){

        if (arr[i] == target ){
            return i;
        }
    
    }        
    return -1;
    
}

int main(void){

    int nums[] = {1, 2, 3};
    int target ;
    int size = 3;
    
    cout << "Which no. do you want to search: ";
    cin >> target;

    cout << searchArr(nums, 3, target) << endl;
}