#include <bits/stdc++.h>
using namespace std;
#define MAXN 100005
#define MAXL 300005
int n;
string s[MAXN];
int len[MAXN];
int cnt[MAXL][26];
long long ans = 0;
int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> s[i];
        len[i] = s[i].length();
        for (int j = 0; j < len[i]; j++)
        {
            cnt[i][s[i][j] - 'a']++;
        }
    }
    for (int i = 1; i <= n; i++)
    {
        string rev = s[i];
        reverse(rev.begin(), rev.end());
        if (rev == s[i])
        {
            ans += (long long)cnt[i][s[i][0] - 'a'] * (cnt[i][s[i][0] - 'a'] - 1) / 2;
            continue;
        }
        int l = 1, r = n;
        while (l <= r)
        {
            int mid = (l + r) >> 1;
            if (mid == i)
            {
                if (l == r)
                    break;
                mid++;
            }
            bool flag = true;
            for (int j = 0; j < len[mid]; j++)
            {
                if (!cnt[i][s[mid][j] - 'a'])
                {
                    flag = false;
                    break;
                }
            }
            if (!flag)
                l = mid + 1;
            else
                r = mid - 1;
        }
        while (l <= n)
        {
            if (l == i || len[l] + len[i] > MAXL)
                break;
            string tmp = s[l] + s[i];
            bool flag = true;
            for (int j = 0; j < tmp.length(); j++)
            {
                if (!cnt[i][tmp[j] - 'a'])
                {
                    flag = false;
                    break;
                }
            }
            if (flag)
                ans++;
            l++;
        }
    }
    cout << ans << endl;
    return 0;
}
