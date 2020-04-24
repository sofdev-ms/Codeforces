#include<bits/stdc++.h>

using namespace std;
#define ll long long int

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    t = 1;
    cin >> t;
    while(t--)
    {
        ll n , k;
        cin >> n >> k;
        ll mx = 0;
        ll ans = -1; 
        ll a[n];
        for(int i = 0 ; i < n ; i ++)
        {
            cin >> a[i];
        }
        ll b[n];
        memset( b , 0 , sizeof(b));
        bool check = 0;
        for(int i = 1;  i < n - 1 ; i ++)
        {
            b[i] = b[i - 1];
            if(a[i] > a[i  - 1] && a[i]  > a[i  + 1])
            {
                b[i] ++;
                check = 1;
            }
        }
        if( n >= 2)
        b[n - 1] = b[ n - 2];
        if(!check)
        {
            cout << "1 1" << endl;
        }
        else
        {
            // for(int i = 0 ; i < n ; i ++)
            // cout << b[i] << " ";
            // cout << endl;
            for(int i = 0 ; i <= n - k ; i ++)
            {
               
                    if(b[i + k - 2] - b[ i ] + 1 > mx)
                    {
                        mx = b[i  + k - 2] - b[ i ] + 1;
                        ans = i + 1;            
                    }
                
            }
            cout << mx << " " << ans << endl;
        }
    }

}