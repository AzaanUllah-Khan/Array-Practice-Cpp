#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int target)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            return i;
        }
    }
    return -1;
}

void reverseArray(int arr[], int size)
{
    int start = 0;
    int end = size - 1;
    while (start < end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }

    cout << "Reversed Array: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i];
        if (i < size - 1)
        {
            cout << ", ";
        }
    }
    cout << endl;
}

int sum(int array[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += array[i];
    }
    return sum;
}

int product(int array[], int size)
{
    int pro = 1;
    for (int i = 0; i < size; i++)
    {
        pro *= array[i];
    }
    return pro;
}

int findMax(int arr[], int size)
{
    int max = 0;
    for (int i = 1; i < size; i++)
    {
        if (arr[max] < arr[i])
        {
            max = i;
        }
    }
    return max;
}

int findMin(int arr[], int size)
{
    int min = 0;
    for (int i = 1; i < size; i++)
    {
        if (arr[min] > arr[i])
        {
            min = i;
        }
    }
    return min;
}

void swapMinMax(int arr[], int size)
{
    int maxIndex = findMax(arr, size);
    int minIndex = findMin(arr, size);
    swap(arr[maxIndex], arr[minIndex]);
    cout << "\n Array after swapping min and max: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i];
        if (i < size - 1)
        {
            cout << ", ";
        }
    }
    cout << endl;
}

void uniqueVal(int arr[], int size)
{
    cout << "Unique value of Array:";
    for (int i = 0; i < size; i++)
    {
        bool isUnique = true;
        for (int j = 0; j < size; j++)
        {
            if (i != j && arr[i] == arr[j])
            {
                isUnique = false;
                break;
            }
        }
        if (isUnique)
        {
            cout << arr[i] << " ";
        }
    }
}

void intersectionOfTwoArrays(int arr1[], int arr2[], int size1, int size2)
{
    cout << "Intersection of Two Arrays:";
    for (int i = 0; i < size1; i++)
    {
        for (int j = 0; j < size2; j++)
        {
            if (arr1[i] == arr2[j])
            {
                cout << arr1[i] << " ";
            }
        }
    }
}

int main()
{
    int arr[5] = {2, 5, 5, 13, 17};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 90;

    int result = linearSearch(arr, size, target);
    cout << "Linear Search Result: " << result << endl;

    // reverseArray(arr, size);

    cout << "Sum of all numbers in the array: " << sum(arr, size) << endl;
    cout << "Product of all numbers in the array: " << product(arr, size) << endl;

    uniqueVal(arr, size);
    swapMinMax(arr, size);
    int a1[4] = {1, 2, 3, 4};
    int a2[3] = {2, 3, 4};
    intersectionOfTwoArrays(a1, a2, 4, 3);

    return 0;
}
