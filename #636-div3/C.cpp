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
        ll ans = 0;
        ll prev = -1;
        for(int i =0 ; i < n ; i ++)
        {
            cin >> a[i];
        }
        int i =0 ;
        while( i < n )
        {
            if(a[i] <  0)
            {
                ll mx = a[i];
                while( i < n && a[i] < 0)
                {
                    mx = max(mx , a[i]);
                    i++;
                }
                ans += mx;
            }
            else
            {
                ll mx = a[i];
                while( i < n && a[i] > 0)
                {
                    mx = max(mx , a[i]);
                    i++;
                }
                ans += mx;
            }
            
        }
        cout << ans << endl;
    }
}