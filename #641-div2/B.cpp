#include<bits/stdc++.h>

using namespace std;
#define ll long long int

int main()
{
   ll t;
   t = 1;	
   cin >> t;
   while(t--){
         ll n;
         cin >> n;
         ll a[n + 1];
         ll ans[n + 1];
         for(int i = 1; i  <= n ; i ++)
         {
            ans[i] = 1;
            cin >> a[i];
            //v.push_back({a[i] , i + 1});
         }
         
         ll ans1 = 1;
         for(int i =1 ; i <= n ; i ++)
         {
            for(int j = 2 * i; j <=n ; j += i)
            {
               if(a[j] > a[i])
               {
                  ans[j] = max(ans[j] , ans[i] + 1);
                  ans1 = max(ans1 , ans[j]);
               }
            }
         }
         cout << ans1 << endl;
   }
}