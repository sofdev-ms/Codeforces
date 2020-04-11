#include<bits/stdc++.h>

using namespace std;
#define ll long long int

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    t = 1;

    cin >> t;
    while(t--)
    {
           ll n;
           cin >> n ;
           ll a[n][2];
           for(int i =0 ; i < n ; i ++)
           cin >> a[i][0] >> a[i][1];
           
            ll ans = 0;
            if( n == 1)
            ans = a[0][0];
            else
            {
                ll mn = 10e17;
                for(int i = 0; i < n ; i ++)
                {
                    if( i == 0)
                    {
                        ll temp =  max((ll)0 , a[i][0] - a[n - 1][1]);
                        ans += temp;
                        mn = min(mn , a[i][0] - temp);
                    }
                    else
                    {
                        ll temp = max((ll)0, a[i][0] - a[i - 1][1]);
                        ans += temp;
                        mn = min(mn , a[i][0] - temp);
                    }
                    
                }
                ans += mn;
            }

           cout << ans << endl;
    }
}