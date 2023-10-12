#include <iostream>
#include <algorithm>
using namespace std;

int nCr(int n, int r)
{

    int ans = 1, s = 1, d = 1;
    for (int i = 1; i <= n; i++)
    {
        ans = ans * i;
    }
    for (int i = 1; i <= r; i++)
    {
        s = s * i;
    }
    for (int i = 1; i <= (n - r); i++)
    {
        d = d * i;
    }
    int nCr;
    nCr = ans / (s * d);
    return nCr;
}
int main()
{
    int a, b;
    cin >> a >> b;
    int answer = nCr(a, b);
    cout << answer << endl;
    return 0;
}