#include <bits/stdc++.h>

using namespace std;
#define ll long long int

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        string s;
        cin >> s;
        int i = 0;
        vector<pair<int, int>> p;
        while (i < n)
        {
            int count = 0;
            while (i < n && s[i] == 'R')
            {
                i++;
                count++;
            }
            if (count != 0)
                p.push_back({0, count});

            count = 0;
            while (i < n && s[i] == 'L')
            {
                i++;
                count++;
            }
            if (count != 0)
                p.push_back({1, count});
        }
        int size = p.size();
        if (size == 1)
        {
            cout << (n + 2) / 3 << endl;
        }
        else
        {
            ll ans = 0;
            if (size % 2 == 0)
            {
                for (int i = 0; i < size; i++)
                {
                    if (p[i].second >= 3)
                        ans += (p[i].second) / 3;
                }
            }
            else
            {
                for (int i = 1; i < size - 1; i++)
                {
                    if (p[i].second >= 3)
                        ans += (p[i].second) / 3;
                }
                if (p[0].second + p[size - 1].second >= 3)
                    ans += (p[0].second + p[size - 1].second) / 3;
            }
            cout << ans << endl;
        }
    }
}
