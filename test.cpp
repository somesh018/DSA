#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n, rem;
    cin >> n;
    while (n > 0)
    {
        rem = n % 10;
        n /= 10;
        cout << rem;
    }
    return 0;
}