#include<bits/stdc++.h>

using namespace std;
#define ll long long int

int main(){

    ll t;
    t = 1;
    //cin >> t;
    
    while(t--)
    {
        ll n;
        cin >> n;
        ll a[n];
        ll b[n];
        for(int i = 0 ; i < n ; i ++)
        cin >> a[i];
        vector < ll > diff;
        for(int i = 0 ; i< n ; i ++)
        {
            cin >> b[i];
            diff.push_back(a[i] - b[i]);
        }
        sort(diff.begin() , diff.end());
        ll ans = 0;
        for(int i = 0 ; i < n ; i ++)
        {
            ll y = 1 - diff[i];
            int pos = lower_bound(diff.begin() , diff.end() , y) - diff.begin();
            ans += n - pos;
            if(pos <= i)
            ans -= ( i - pos + 1);

        }
        cout << ans << endl;
    }

}