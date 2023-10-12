#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int arr[8] = {0, 3, 5, 2, 4, 6, 7, 4};
    vector<int> freq;
    for (int i = 0; i <= 7; i++)
    {
        freq[arr[i]]++;
    }
    int h = 0;
    for (int j = 0; j <= 9; j++)
    {
        while (freq[j]--)
        {
            arr[h++] = j;
        }
    }
    for (int a = 0; a <= 7; a++)
    {
        cout << arr[a] << endl;
    }
}
