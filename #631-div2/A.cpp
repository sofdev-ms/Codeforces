#include<bits/stdc++.h>

using namespace std;
#define ll long long int

int main(){
    ll t;
    t = 1;
    cin >> t;
    while(t--)
    {
        ll n,x;
        cin >> n >> x;
        ll count[202] = {0};
        for(int i =0 ; i <  n; i ++)
        {   
            ll x;

            cin >>x;
            count[x] = 1;
        }
        int i = 1;
        ll ans = 0;
        while(x!=0)
        {
            if(count[i] == 0)
            {
                count[i] = 1;
                ans = i;
                x--;
            }
            ans = i;
            i++;
        }
        while(count[i])
        {
            ans = i;i++;
        }
        cout << ans << endl;
     }
}