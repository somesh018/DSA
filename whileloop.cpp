#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int i = 2;
    while (i < n)
    {
        if (n % i != 0)
        {
            cout << "yes " << endl;
        }
        else
        {
            cout << "Not" << endl;
        }
        i = i + 1;
    }
}