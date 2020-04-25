
#include <bits/stdc++.h>

using namespace std;
#define ll long long int

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int n = s.length();
        int ans = 0;
        int i = 0;
        int prev = -1;
        while (i < n)
        {
            while (i < n && s[i] == '0')
                i++;

            while (i < n && s[i] == '1')
            {
                if (prev == -1)
                    prev = i;
                else
                {
                    ans += i - prev - 1;
                    prev = i;
                }
                i++;
            }
        }
        cout << ans << endl;
    }
}