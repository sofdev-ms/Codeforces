#include<bits/stdc++.h>

using namespace std;
#define ll long long int

int main(){

    ll n;
    cin >> n;
    ll a[n];
    ll pref[n + 1];
    pref[0] = 0;
    for(int i = 0; i  < n ; i ++)
    {
        cin >> a[i];
        pref[i + 1] = pref[i] + a[i];
    }

    map < ll , ll > m;
    ll ans  =0 ;
    ll temp1 = n + 1;
    for(ll i = n ; i > 0 ; i --)
    {
        //cout << pref[i] << " ";
        m[pref[i]] = i;
        ll t = pref[ i - 1];
        ll ind = n + 1;
        if(m[t])
        ind = m[t];

        temp1 = min(ind , temp1);
        ans += (temp1 - i);
        //cout << ans << endl;
    }
    //cout << endl;
    cout << ans << endl;







}