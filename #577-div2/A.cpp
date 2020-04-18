#include<bits/stdc++.h>

using namespace std;
#define ll long long int

int main(){
    ll t;
    t = 1;
    //cin >> t;
    while(t--){
        ll n, m;
        cin >> n >> m;
        ll count[m][5];
        memset(count , 0 , sizeof(count));
        ll mx[m];
        memset(mx , 0 ,sizeof(mx));
        for(int i =0 ; i < n ; i ++)
        {
            string s;
            cin >> s;
            for(int j =0 ; j < m ; j ++)
            {
                count[j][(int)s[j] - 'A']++;
                mx[j] = max(mx[j] , count[j][(int)s[j] - 'A']);
            }
        }
        ll ans = 0;
        for(int i =0 ; i < m ;i ++)
        {
            ll x;
            cin >> x;
            ans += mx[i] * x;
        }
        cout << ans << endl;
    }
}