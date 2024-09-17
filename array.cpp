#include <iostream>
using namespace std;


int linearSearch(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i; 
        }
    }
    return -1; 
}

void reverseArray(int arr[], int size) {
    int start = 0;
    int end = size - 1;
    while (start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }

    cout << "Reversed Array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i];
        if (i < size - 1) {
            cout << ", ";
        }
    }
    cout << endl;
}

int main() {
    int arr[5] = {2, 5, 9, 13, 17};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 90;    
    int result = linearSearch(arr, size, target);
    cout << "Linear Search Result: " << result << endl;
    reverseArray(arr, size);

    return 0;
}
