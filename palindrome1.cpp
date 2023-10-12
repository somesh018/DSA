#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    char ch[9];
    cin >> ch;
    for (int i = 0; i <= 8; i++)
    {
        for (int j = 8; j >= 0; j--)
        {
            if (ch[i] == ch[j])
            {
                cout << ch[i];
            }
        }
    }
    return 0;
}