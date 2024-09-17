#include <iostream>
using namespace std;

int main(){
    int arr[5] = {2,5,9,13,17};
    int start = 0;
    int end = (sizeof(arr)/sizeof(int))-1;
    // Linear Search
    int target = 90;
    bool flag = false;

    for (int i = 0; i < (sizeof(arr)/sizeof(int)); i++)
    {
        if(target == arr[i]){
            cout << i;
            flag = true;
            break;
        }
    }
    if (!flag)
    {
        cout << -1;
    }

    // Swapping array
    for (int i = 0; i <= (sizeof(arr)/sizeof(int)); i++){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }

    for (int i = 0; i <= (sizeof(arr)/sizeof(int)); i++){
        cout << arr[i] << ",";
    }
    return 0;
}