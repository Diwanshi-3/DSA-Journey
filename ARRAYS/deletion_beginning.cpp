#include <iostream>
using namespace std;

int main() {
    int arr[100] = {10, 20, 30, 40, 50};
    int size = 5;

    cout << "Before Deletion:" << endl;
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    // Deleting first element by shifting elements left
    for(int i = 0; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }

    size = size - 1;

    cout << "\nAfter Deletion:" << endl;
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
