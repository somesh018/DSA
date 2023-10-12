#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n, sum = 0, rem, temp;
    cin >> n;
    temp = n;
    while (n > 0)
    {
        rem = n % 10;
        sum = sum + rem;
        n /= 10;
    }
    if (temp % sum == 0)
    {
        cout << "Number is a harshad" << endl;
    }
    else
    {
        cout << "Number is not harshad" << endl;
    }

    return 0;
}