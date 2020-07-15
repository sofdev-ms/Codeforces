#include <bits/stdc++.h>

using namespace std;
#define ll long long int

int main()
{
    ll t;
    t = 1;
    //cin t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll a[n];
        ll bit[21] = {0};
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            for (int j = 0; j < 21; j++)
            {
                ll x = 1 << j;
                if (x & a[i])
                    bit[j]++;
            }
        }
        ll ans = 0;
        for (int i = 0; i < n; i++)
        {
            ll temp = 0;
            for (int j = 0; j < 21; j++)
            {
                if (bit[j])
                {
                    ll x = 1 << j;
                    temp |= x;
                    bit[j]--;
                }
            }
            ans += temp * temp;
        }
        cout << ans << endl;
    }
}
