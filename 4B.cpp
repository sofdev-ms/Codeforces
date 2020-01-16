#include<bits/stdc++.h>
 
using namespace std;
#define ll long long int
 
int main()
{
    ll n,m;
    cin >> n >> m;
    ll total = 0;
    ll rem = 0;
    ll a[n][2];
    for(int i = 0 ; i < n ; i ++)
    {
        cin >> a[i][0] >> a[i][1];
        total += a[i][0];
        rem += a[i][1] - a[i][0];
    }
    if( m < total || m > total + rem)
    cout << "NO" << endl;
    else
    {
        cout << "YES" <<endl;
        m -= total;
        for(int i = 0 ; i < n ; i ++)
        {
            ll t = a[i][0];
            if( m > 0)
            {
                if( a[i][1] - a[i][0] < m)
                {
                    t = a[i][1];
                    m -= (a[i][1] - a[i][0]);
                }
                else
                {
                    t += m;
                    m = 0;
                }
            }
            cout << t << " ";
        }
    }
}
