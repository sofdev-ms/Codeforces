#include<bits/stdc++.h>

using namespace std;
#define ll long long int
#define mod 1000000007



int main()
{
   ll n , m , k;
   cin >> n >> m >> k;
   ll a[m];
   for(int i =0  ; i<  m ; i++)
   {
       cin >> a[i];
       a[i]--;
   }
   ll  i = 0;
   ll ans = 0;
   ll gone = 0;
   while( i < m)
   {
       ll t = gone;
       ll r = (a[i] - t) / k;
       ans++;
       while( i < m && (a[i] - t) / k == r)
       {
           gone ++;
           i++;
       }
       
   }
   cout << ans << endl;
 
  
}
