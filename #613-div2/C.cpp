#include<bits/stdc++.h>
 
using namespace std;
#define ll long long int
#define mod 1000000007

 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    t = 1;
    //cin >> t;
    while(t--)
    {
         ll n;
         cin >> n;
         ll present = 1;
         ll temp = n;
         ll ans = temp;
         ll v1 = 1; 
         for(ll i = 1; i* i<=n ; i++)
         {
             if( n % i == 0)
             {
                 ll x = i;
                 ll y = n / i;
                 if( __gcd (x , y) == 1)
                 {
                     if(ans > max(x , y))
                     {
                         ans = max(x , y);
                     }
                 }
             }
         }
         cout << n /ans << " " << ans << endl;
    }
 
    return 0;
 
}
