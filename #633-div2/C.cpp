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
        ll n;
        cin >> n;
        ll a[n];
        ll ans = 0;
        ll sum2 = 0;
        ll mx = 0;
        for(int i =0 ; i < n; i ++)
        {
            cin >> a[i];
            if( i!=0)
            {
                if(a[i - 1] - a[i] > 0)
                {
                    // ll pos = lower_bound(temp.begin() , temp.end() , a[i - 1] - a[i]) - temp.begin();
                    ans = max(ans , (ll)log2(a[i - 1] - a[i]) + 1);
                    a[i] += (a[i - 1] - a[i]); 
                }

            }
        }
        
        cout << ans << endl;
        
        
    }
}