#include<bits/stdc++.h>

using namespace std;
#define ll long long int

int main()
{
   ll t;
   t = 1;	
   //cin >> t;
   while(t--){
       ll n;
       cin >> n;
       ll a[n];
       for(int i =0 ; i < n ; i++)
       cin >> a[i];
       if(n == 1)
       cout<< a[0] << endl;
       else if( n== 2)
       cout << (a[0] | a[1]) << endl;
       else
       {
           ll ans = 0;
           for(int i = 0 ; i< n ; i ++)
           {
               for(int j = i + 1;  j < n ; j ++)
               {
                   for(int k = j + 1 ; k < n ; k ++)
                   {
                       ans = max(ans , a[i] | a[j] | a[k]);
                   }
               }
           }
           cout << ans << endl;
        
       }
   }
}
