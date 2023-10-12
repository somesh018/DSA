#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int posneg(vector<int> &arr1, int n)
{
    vector<int> a;

    sort(arr1.begin(), arr1.end());
    for (int i = 1; i <= arr1.size(); i = i + 2)
    {
        for (int j = n - 1; j <= 0; j = j + 2)
        {
            swap(arr1[i], arr1[j]);
        }
    }
    for (int i = 0; i < arr1.size(); i++)
    {
        cout << arr1[i];
    }
}

int main()
{
    vector<int> arr;
    arr.push_back(1);
    arr.push_back(-3);
    arr.push_back(-9);
    arr.push_back(4);
    arr.push_back(6);
    arr.push_back(-5);

    int result = posneg(arr, 6);
    return 0;
}