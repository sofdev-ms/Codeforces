#include<bits/stdc++.h>

using namespace std;
#define ll long long int

bool check(ll mid, ll s)
{
    ll total = mid;
    while(mid != 0)
    {
        total -= ( mid % 10);
        mid /= 10;
    }
    return total >= s;
}

int main()
{
   ll t;
   t = 1;	
  // cin t;
   while(t--){
        ll n , s;
        cin >> n >> s;
        ll l = 1;
        ll r = n;
        ll ans = n + 1;
        while( l <= r)
        {
            ll mid = l + ( r - l) / 2;
            if(check(mid , s))
            {
                ans = mid;
                r = mid - 1;
            }
            else
            l = mid + 1;
        }     
        if(ans == n + 1)
        cout << 0 << endl;
        else
        cout << n - ans + 1 << endl;
   }
}
