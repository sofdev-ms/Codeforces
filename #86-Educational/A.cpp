#include<bits/stdc++.h>

using namespace std;
#define ll long long int

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while( t-- )
    {
        ll x , y;
        cin >> x >> y;
        ll a , b;
        cin >> a >> b; 
        ll ans =  a * (x + y);
        ll diff = abs(x  - y);
        ll mn = min( x , y);
        ll total = b * ( mn );
        total += diff * a;
        ans = min(total , ans);
        cout << ans << endl;;
    }
}