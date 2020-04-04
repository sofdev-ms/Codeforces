#include<bits/stdc++.h>

using namespace std;
#define ll long long int

int main(){

    ll t;
    cin >> t;
    while(t--)
    {
        ll d , m;
        cin >> d >> m;
        ll ans = 1;
        for(int i = 0 ; i <= 30; i ++)
        {
            ll y = 1 << i;
            ll z = y * 2;
            if( d < y)
            break;
            ans = ((ans % m)  * (min(z - 1, d) - y + 2 + m) % m) % m;
            ans %= m; 
        }
        ans = (ans - 1 + m) % m;
        cout << ans << endl;
    }




}