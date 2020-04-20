#include<bits/stdc++.h>

using namespace std;
#define ll long long int

int main()
{
    ll t;
    t = 1;
    //cin >> t;
    while(t--)
    {
        ll n , m;
        cin >> n >> m;
        ll a[n];
        for(int i=0 ; i < n ; i ++)
        {
            cin >> a[i];
        }
        sort(a , a+ n);
        ll count[m];
        memset(count , 0 , sizeof(count));
        ll ans = 0;
        ll top = 0;
        for(int i = 0; i < n ; i ++)
        {
            ans += a[i];
            
            if( i - m >=0)
            {
                ans += count[(i - m) % m];

            }
            count[i  % m ] += a[i];
            cout << ans << " ";
        }
    }
}