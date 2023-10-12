#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int num[13] = {0};
    int n = 13;
    for (int i = 0; i < n; i++)
    {
        num[i] = 1;
        cout << num[i] << " ";
    }
    cout << num[4] << endl;

    return 0;
}