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
        ll n;
        cin >> n;
        ll p = 1;
        ll a[n];
        ll pos = 0;
        ll neg = 0;
        ll ans1 = 0;
        ll ans2 = 0;
        ll b[n];
        for(int i = 0 ; i <n ;  i++)
        {
            ll x;
            cin >> x;
            if(x < 0)
            {
                p *= -1;
                b[i] = -1;
            }
            else
            b[i] = 1;
            if( p > 0)
            pos++;
            else
            neg++;
            a[i] = p;
        }
         p = 1;
        for(int i =0  ; i< n ; i ++)
        {
            
            if( b[i] == a[i])
            {
                ans1 += neg;
                ans2 += pos;
            }
            else
            {
                ans1 += pos;
                ans2 += neg;
            }



            if(a[i] < 0)
            neg--;
            else
            pos--;
        }
        cout << ans1 << " " << ans2 << endl;
    }
}