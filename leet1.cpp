#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
    int a, ans = 0, i = 0, rev;
    cin >> a;
    while (a != 0)
    {
        int bit = a & 1;
        rev = ~bit;
        int d = 7;

        a = a >> 1;
    }
    cout << ans;

    return 0;
}