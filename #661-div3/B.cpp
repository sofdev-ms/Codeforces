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
        ll a[n];
        ll b[n];
        ll mn = INT_MAX;
        ll mn1 = INT_MAX;
        for(int i = 0; i < n ; i++)
        {
            cin >> a[i];
            mn = min(a[i] , mn);
        }
        for(int i = 0; i < n ; i++)
        {
            cin >> b[i];
            mn1 = min(b[i] , mn1);
        }
        ll ans = 0;
        for(int i = 0; i < n ; i ++)
        {
            ans += max(a[i] - mn , b[i] - mn1);
        }
        cout << ans << endl;
    }
}
