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

int sum(int array[], int size){
    int sum = 0;
    for(int i = 0; i < size; i++){
        sum += array[i];
    }
    return sum;
}
int product(int array[], int size){
    int pro = 1;
    for(int i = 0; i < size; i++){
        pro *= array[i];
    }
    return pro;
}

int main() {
    int arr[5] = {2, 5, 9, 13, 17};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 90;    
    int result = linearSearch(arr, size, target);
    cout << "Linear Search Result: " << result << endl;
    reverseArray(arr, size);
    cout << "Sum Of all numbers of an Array " << sum(arr,size) << endl;
    cout << "Sum Of all numbers of an Array " << product(arr,size) << endl;

    return 0;
}
