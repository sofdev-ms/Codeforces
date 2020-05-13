#include <bits/stdc++.h>

using namespace std;
#define ll long long int
ll lcm(ll a, ll b)  
 {  
    return (a*b)/__gcd(a, b);  
 } 
int main()
{
   ll t;
   t = 1;
   //cin >> t;
   while (t--)
   {
      ll n;
      cin >> n;
      ll a[n];
      for (int i = 0; i < n; i++)
      {
         cin >> a[i];
      }
      vector<ll> gcdt;
      vector<ll> lcmt;
      gcdt.push_back(a[n - 1]);
      ll prev = a[n - 1];
      lcmt.push_back(lcm(a[n - 2] , a[n - 1]));
      for (int i = n - 2; i >= 1; i--)
      {
         prev = __gcd(a[i], prev);
         gcdt.push_back(prev);
         lcmt.push_back(lcm(a[i - 1] , prev));
      }
      ll ans = lcmt[0];
      for(int i =1 ; i < n - 1; i ++)
      {
         ans = __gcd(ans , lcmt[i]);
      }
      cout << ans << endl;
      
   }
}