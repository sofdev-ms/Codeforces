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
       ll a[n];
       ll count[2048] = {0};
       for(int i =0 ; i < n; i ++)
       {
           cin >> a[i];
           count[a[i]]++;
       }
       ll ans = -1;
       for(int i = 1; i <= 1024 ; i ++)
       {
           int flag = 1;
           for(int j = 0; j < n ; j ++)
           {
               if( count[i ^ a[j]] == 0)
               {
                   flag = 0;
                   break;
               }
           }
           if(flag)
           {
               ans = i;
               break;
           }
       }
       cout <<ans << endl;
   }
}
