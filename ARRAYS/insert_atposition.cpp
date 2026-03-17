#include <iostream>
using namespace std;

int main() {
    int arr[100] = {10, 20, 30, 40, 50};
    int size = 5;
    int pos, element;

    cout << "Before Insertion:\n";
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    cout << "\nEnter position (0-based index): ";
    cin >> pos;

    cout << "Enter element to insert: ";
    cin >> element;

    // Shift elements to right
    for(int i = size; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert element
    arr[pos] = element;
    size = size + 1;

    cout << "After Insertion:\n";
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}