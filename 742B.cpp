#include<bits/stdc++.h>

using namespace std;
#define ll long long int
#define mod 1000000007



int main()
{
   ll n,k;
   cin >> n >>k;
   ll a[n];
   map < ll , ll > count;
   for(int i = 0 ; i < n ; i++)
   {
       cin >> a[i];
       count[a[i]]++;
   }
   sort(a , a+n);
   ll ans = 0;
   for(int i = 0; i < n ; i++)
   {
       count[a[i]] --;
       ans += count[a[i] ^ k];
   }
   cout <<ans << endl;
   
   
 
  
}
