#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n, sqr, rem;
    cin >> n;
    sqr = n * n;
    rem = sqr % 10;
    if (rem == n)
    {
        cout << "Number is Automorphic" << endl;
    }
    else
    {
        cout << "Number is not Automorphic" << endl;
    }

    return 0;
}