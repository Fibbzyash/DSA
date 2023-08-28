#include <iostream>
using namespace std;

int LinearSearch(int arr[], int size, int key) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            return i;  
        }
    }

    return -1; 
}

int main() {
    int key;
    cin >> key;

    int arr[10] = {2, 10, -4, 11, 20, -2, 0, 5, 29, 1};

    int foundIndex = LinearSearch(arr, 10, key);
    if (foundIndex != -1) {
        cout << "Key is present at index " << foundIndex << endl;
    } else {
        cout << "Key is not found" << endl;
    }

    return 0;
}
