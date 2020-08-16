#include<bits/stdc++.h>

using namespace std;
#define ll long long int

int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        ll mx = -1;
        ll a[n];
        for(int i = 0; i < n ; i ++)
        {
            cin >> a[i];
            mx = max(mx, a[i]);
        }
        ll ans = 0;
        ll res = 0;
        for(int i = n - 1; i >=1 ; i --)
        {
            if(a[i] < a[i  - 1])
            {
                ans += a[i - 1] - a[i];
            }
        }
        //ans += mx - a[0];
        cout << ans << endl;

    }
}
