# include <iostream>
using namespace std;

void changeArr(int arr[], int size){
    int i;
    for ( i = 0; i < size; i ++){
        arr[i] = 2 * arr[i];
    }
}





int main(void){

     int nums[] = {1, 2, 3}, i;

    changeArr(nums, 3);

    for (i = 0; i < 3; i ++){
        cout << nums[i] << " ";
    }

    cout << endl;

}