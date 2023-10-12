#include <iostream>
using namespace std;
int main()
{
    int n, i, fact = 1, temp, rem, sum;
    cin >> n;
    sum = 0;
    temp = n;
    while (n > 0)
    {
        rem = n % 10;

        for (i = 1; i <= rem; i++)
        {
            fact = fact * i;
        }
        sum = sum + fact;
        n /= 10;
        fact = 1;
    }

    if (temp == sum)
    {
        cout << "The number is strong" << endl;
    }
    else
    {
        cout << "The number is not strong" << endl;
    }
}