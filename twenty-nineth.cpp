// Remove Duplicates from Sorted Array
// Given a sorted array, remove duplicates in-place.

#include <iostream>
using namespace std;

int main() {
    int arr[10] = {0, 0, 1, 1, 1, 2, 3, 4, 4, 4};
    int size = 10; 

    if (size == 0) {
        cout << "Array is empty" << endl;
        return 0;
    }

    int j = 0;
    for (int i = 1; i < size; i++) {
        if (arr[i] != arr[j]) {
            j++;
            arr[j] = arr[i];
        }
    }

    int newSize = j + 1;

    cout << "Array after removing duplicates: ";
    for (int i = 0; i < newSize; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "New length: " << newSize << endl;

    return 0;
}