#include <iostream>
#include <algorithm>
using namespace std;

int peak(int arr[], int size)
{
    int s = 0;
    int e = size - 1;
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (arr[mid] > arr[mid + 1] && arr[mid] > arr[mid - 1])
        {
            return mid;
        }
        else if (arr[mid + 1] > arr[mid])
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return -1;
}

int main()
{
    int arr[4] = {0, 10, 5, 2};
    int result = peak(arr, 4);
    cout << result << endl;
    return 0;
}