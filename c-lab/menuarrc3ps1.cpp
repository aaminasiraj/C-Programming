# include <iostream>
using namespace std;

int arr[100] = {1,2,3,4,5,6,7,8,9,10};
int n = 0;

void display(){
    for (int i = 0; i < 11; i++) {
        if(arr[i] != 0){
            cout << arr[i] << " ";
        }
        
    }
    cout << endl;
}

void addBegin(int value){
    for (int i = 10; i > 0; i--){
        arr[i] = arr[i - 1];
       // n++;   // count elements to print in array later for the loop in display func.
    }
    arr[0] = value;
}

void addEnd(int value){
    arr[10] = value; 
}

void addPos(int value, int position){
    for( int i = 10; i > position ; i -- ){
        arr[i] = arr[i - 1];
    }
    arr[position] = value;
} 

void delBegin(){
    for (int i = 0; i < 10; i++){
        arr[i] = arr[i + 1];
    }
}

void delEnd(){
    arr[9] = 0;
}

void delPos(int value, int position){
    for (int i = position; i < 10; i++){
        arr[i] = arr[i + 1];
    }
}

int main(void){
    
    int option, position, value;

    cout << "Choose an optionfrom the following" << endl;
    cout << "1. add at beginning " << endl;
    cout << "2. add at end " << endl;
    cout << "3. add at postion " << endl;
    cout << "4. delete at beginning " << endl;
    cout << "5. delete at end " << endl;
    cout << "6. delete at position " << endl;

    cout << " Enter option: " << endl;
    cin >> option;

    cout << " Enter value if required: " << endl;
    cin >> value;

    cout << " Enter position if required: " << endl;
    cin >> position;

    switch(option){
        case 1:
        addBegin(value);
        display(); 
        break;

        case 2:
        addEnd(value); 
        display();
        break;

        case 3:
        addPos(value, position); 
        display();
        break;

        case 4: 
        delBegin(); 
        display();
        break;

        case 5:
        delEnd(); 
        display();
        break;

        case 6:
        delPos(value, position); 
        display();
        break;

        case 7: 
        display();
        cout << " exiting program" << endl;
    }


}