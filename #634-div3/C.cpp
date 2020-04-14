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
        ll count[200001] = {0};
        ll total = 0;
        ll mx = 0;
        for(int i = 0 ;i  < n ; i ++)
        {
            ll x;
            cin >> x;
            count[x]++;
            if(count[x] == 1)
            {
                total ++;
            }
            mx = max(mx, count[x]);
        }
        
        if(total > mx)
        {
            cout << mx << endl;
        }
        else if(total == mx)
        {
            cout << mx - 1 << endl;
        }
        else
        {
            cout << total << endl;
        }
    }
}