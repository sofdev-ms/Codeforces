#include <bits/stdc++.h>

using namespace std;
#define ll long long int

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    t = 1;
    cin >> t;
    while (t--)
    {

        ll x = 10;
        ll y = 7;
        ll q;
        cin >> x >> y >> q;
        ll temp = (x * y) / (__gcd(x, y));
        ll mx = max(x, y);
        while (q--)
        {
            ll a, b;
            cin >> a >> b;

            ll l = (a) / temp;
            ll r = (b / temp);
           // cout << l << " " << r << endl;
            ll ans = b - a + 1;
            ans -= max((ll)0, (r - l - 1) * mx);
            //cout << ans << endl;
            ll zz = l * temp;
            for (ll i =  max ( a , l * temp ) ; i < l * temp + mx; i++)
            {
                //cout << i << endl;
                if ((i % x) % y == (i % y) % x)
                    ans--;
            }
           // cout << ans << endl;
            if (l != r)
            {
                for (ll i = r * temp; i <= min (r * temp + mx - 1, b); i++)
                {
                    if ((i % x) % y == (i % y) % x)
                        ans--;
                }
            }
            cout << max ( (ll)0 , ans) << " ";
        }
        cout << endl;
    }
}