#include <bits/stdc++.h>

using namespace std;
#define ll long long int

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, m;
        cin >> n >> m;
        ll sum = 0;
        ll a[m];
        for (int i = 0; i < m; i++)
        {
            cin >> a[i];
            sum += a[i];
        }

        if (sum < n)
            cout << "-1" << endl;
        else
        {
            ll count[33][33];
            memset(count, 0, sizeof(count));
            for (ll i = 0; i < m; i++)
            {
                ll x = a[i];
                ll cost = 0;
                ll p = (ll)log2(x);
                while (x != 0)
                {
                    count[p][cost]++;
                    x /= 2;
                    p--;
                    cost++;
                }
            }
            ll total = 0;
            ll ans = 0;
            for (ll i = 0; i <= 32; i++)
            {
                ll temp = 1 << i;
                if (temp > n)
                    break;

                total += (temp)*count[i][0];
                count[i][0] = 0;
                if (!(temp & n))
                    continue;
                if (total >= temp)
                {
                    total -= temp;
                }
                else
                {
                    for (ll j = 1; j <= 33; j++)
                    {
                        if (count[i][j] > 0)
                        {
                            ans+=j;
                            total += temp;
                            for(ll k = i + 1; k < i + j ; k ++)
                            count[k][0]++;

                            count[i + j][0]--;
                            break;
                        }
                    }
                }
            }
            cout << ans << endl;
        }
    }
}