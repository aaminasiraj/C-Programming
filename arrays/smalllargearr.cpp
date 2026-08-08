# include <iostream>
using namespace std;

int main(void){

    int arr[10],i ;

    for (i = 0; i < 10; i ++){
        cout << "Enter NUmber: ";
        cin >> arr[i];
    }
    
    int smallest = INT_MAX;
    for (i = 0; i < 10; i++){
        smallest = min(arr[i], smallest);                                 //if (arr[i] < smallest){
                                                                          //   smallest = arr[i];
                                                                          //}
    }

    int largest = INT_MIN;
    for (i = 0; i < 10; i++){
        largest = max(arr[i], largest);                                   //if (arr[i] > largest){
                                                                          //    largest = arr[i];
                                                                          //}
    }

    cout << "The Smallest Number is " << smallest << endl;
    cout << "The Largest Number is " << largest << endl;

}