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
        ll n , k , x;
        cin >> n >> k >> x;
        ll fac = 1;
        for(ll i = 1 ; i <=k ; i ++)
        {
            fac = fac * x;
        }
        ll a[n];
        for(ll i = 0; i < n ; i ++)
        cin >> a[i];

        ll arr1[n];
        ll arr2[n];

        arr1[0] = 0;
        arr2[n - 1] = 0 ;
        for(int i = 0;i < n - 1 ; i ++)
        {
            arr1[i + 1] = arr1[i] | a[i];
        }
        for(int i = n - 2; i >=0; i --)
        {
            arr2[i] = arr2[i + 1] | a[i + 1];
        }
        ll ans = 0 ;
        for(int i = 0 ;  i < n ; i ++)
        {
            ans = max(ans , arr1[i] | arr2[i] | a[i] * fac);
        }
        cout << ans << endl;
    }
}