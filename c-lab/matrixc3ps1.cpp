# include <iostream>
using namespace std;

int main(){
    int rows;
    int columns;
    cout << "Enter no. of rows: " << endl;
    cin >> rows;
    cout << "Enter no. of columns" << endl;
    cin >> columns;

    cout <<endl;

    int arr[100][100];
    for(int i = 0 ; i < rows ; i ++){
        for (int j =0 ; j < columns; j++){
            cin >> arr[i][j];
        }
        cout << endl;
    }

    int left = 0;
    int right = columns - 1;
    int top = 0;
    int bottom = rows - 1;

    while( left <= right && top <= bottom){

        for ( int j = left; j <= right; j++ ){
            cout << arr[top][j] << " ";
        }
        top ++;
        for ( int i = top ; i <= bottom; i++ ){
            cout << arr[i][right] << " ";
        }
        right --;

        if(top <= bottom){
            for (int j = right; j >= left; j --){
                cout << arr[bottom][j] << " ";
            }
            bottom --;
        }
        if( left <= right){
            for(int i = bottom; i >= top; i--){
                cout << arr[i][left] << " ";
            }
            left++;
        }
        
    }
    cout << endl;
    return 0;

}
