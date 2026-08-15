# include <iostream>
using namespace std;

int arr[5];
int qCount = 0;   
int f = 0, r = -1;
const int SIZE = 5;

void enqueue(int val) {
    if (qCount == SIZE) {
        cout << "Queue is full!" << endl;
        return;
    }
    r = (r + 1) % SIZE;
    arr[r] = val;
    qCount++;
    cout << val << " enqueued to queue." << endl;
}

void dequeue() {
    if (qCount == 0) {
        cout << "Queue is Empty!" << endl;
        return;
    }
    cout << arr[f] << " dequeued from queue." << endl;
    f = (f + 1) % SIZE;
    qCount--;
}

void display() {
    if (qCount == 0) {
        cout << "Queue is empty." << endl;
        return;
    }
    cout << "Queue elements (Front to Rear): ";
    int i = f;
    for (int c = 0; c < qCount; c++) {
        cout << arr[i] << " ";
        i = (i + 1) % SIZE;
    }
    cout << endl;
}

int main() {
    int choice, val;
    while (1) {
        cout << "\n=== CIRCULAR QUEUE MENU ===" << endl;
        cout << "1. Enqueue" << endl;
        cout << "2. Dequeue" << endl;
        cout << "3. Display" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value to enqueue: ";
                cin >> val;
                enqueue(val);
                break;
            case 2:
                dequeue();
                break;
            case 3:
                display();
                break;
            case 4:
                cout << "Exiting..." << endl;
                return 0;
            default:
                cout << "Invalid choice! Enter a number from 1 to 4." << endl;
        }
    }
    return 0;
}