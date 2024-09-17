#include <iostream>
using namespace std;

int main(){
    int arr[5] = {2,5,9,13,17};
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
    
    return 0;
}