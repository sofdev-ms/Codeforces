#include<bits/stdc++.h>

using namespace std;
#define ll long long int
int main()
{
    ll t;
    t =1;
    //cin >> t;
    while(t--)
    {   
        ll n;
        cin >> n;
        ll ans = 0;
        for(int i = 0 ; i < 32; i ++)
        {
            ll y = 1 << i;
            if( y & n)
            ans ++;
        }
        cout << ans <<endl;
    }
}