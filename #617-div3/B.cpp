#include<bits/stdc++.h>

using namespace std;
#define ll long long int

int main(){
    ll t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        ll ans = 0 ;
        while(n > 19)
        {
            ll temp = n / 10;
            temp --;
            ans += temp * 10;
            n = n - temp * 10;
            n += temp;

        }

        ans +=n;
        if( n >= 10)
        ans ++;
        if( n == 19)
        ans++;
        cout << ans << endl;
    }
}