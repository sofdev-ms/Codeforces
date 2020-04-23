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
        ll a , b , c , d , n;
        ll mn = a + b + 1;
        ll mx = 0;
        cin >> a >> b >> c >> d >> n;
        for(ll i =0 ; i <=a ; i ++)
        {
            for(ll j=0 ; j  <= b ; j ++)
            {
                if( i * c + j * d <= n)
                {
                    mx = max( i + j , mx);
                }
                ll temp = i * c + j * d + ( a - i ) * (c - 1) + ( b - j) * (d - 1);
                if( n - temp <= 0)
                mn = min(mn , i + j);
            }
        }
        cout << mn << " " << mx << endl;
    }
}