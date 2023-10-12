#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n, i, sum = 0, temp;
    cin >> n;
    temp = n;
    for (i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            sum = sum + i;
        }
    }
    if (temp == sum)
    {
        cout << "Number is perfect" << endl;
    }
    else
    {
        cout << "number is not perfect" << endl;
    }

    return 0;
}