#include<bits/stdc++.h>

using namespace std;
#define ll long long int

int main()
{
   ll t;
   t = 1;	
   cin >> t;
   while(t--){
        ll x;
        cin >> x;
        ll ans = 0;
        for(ll i =0 ; i < 64; i ++)
        {
            ll temp = (ll)1 << i;
            
            if(x & temp)
            {
               // cout << temp << endl; 
                ans += temp * 2 - 1;
            }
        }    
        cout << ans << endl;
   }
}
