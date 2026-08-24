# include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter teh size " << endl;
    cin >> n;

    cout << "enter The elements: " << endl;
    int arr[100][100];
    for(int i = 0; i < n; i++ ){
        for ( int j = 0; j < n; j++){
            cin >> arr[i][j]; 
        }
        cout << endl;
    }


    for( int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            int min = 1;
            int max = 1;
            for (int k = 0; k < n; k++){
                if (arr[k][j] < arr[i][j]){
                    min = 0;
                    break;
                }
            }
            
            if(min == 1){
                for(int k = 0; k < n; k++){
                    if(arr[k][i] < arr[i][j]){
                        max = 0;
                        break;
                    }
                }
            }
            if (min == 1 && max == 1){
                cout << "the saddle point is " << arr[i][j] << endl;
            }
        }
            
    }

    return 0;
}