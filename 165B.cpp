#include<bits/stdc++.h>

using namespace std;
#define ll long long int
#define mod 1000000007

bool check(ll z , ll k, ll n)
{
    ll total = z;
    ll t = k;
    while( k <= z)
    {
        total += z / k;
        k = k * t; 
    }
    return total >= n;
}


int main()
{
   ll n,k;
   cin >> n >> k;
   ll present = 1;
   ll ans = INT_MAX;
   ll l = 1;
   ll r = n;
   while( l <= r)
   {
       ll mid = l + (r - l) /2;
       if(check(mid , k , n))
       {
           ans = min(ans , mid);
           r = mid -1;
       }
       else
       l = mid + 1;
   }
   cout << ans << endl;
  
 
  
}
