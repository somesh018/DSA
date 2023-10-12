#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        int dw = i;
        while (j <= i)
        {
            cout << dw << " ";
            dw = dw - 1;
            j = j + 1;
        }

        cout << endl;
        i = i + 1;
    }
}