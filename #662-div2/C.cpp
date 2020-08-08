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
        ll count[100001] = {0};
        ll a[n];
        for(int i =0 ; i < n ;i  ++)
        {
            ll x;
            cin >> x;
            a[i] = x;
            count[x]++;
            mx = max(mx , count[x]);
        }
        int c = 0;
        for(int i =0 ; i <= 100000;i ++)
        {
            if(count[i] == mx)
            c++;
        }
        int ans = c - 1;
        int b = mx - 1;
        int rem = n - c * mx;
        ans += rem / b;
        cout << ans << endl;

    }
}
