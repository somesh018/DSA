#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int temp, r, sum = 0;
    temp = n;

    while (n > 0)
    {
        r = n % 10;
        sum = (sum * 10) + (r);
        n = n / 10;
    }
    if (temp == sum)
    {
        cout << "Palindrome" << endl;
    }
    else
    {
        cout << "Not a Palindrome" << endl;
    }
}