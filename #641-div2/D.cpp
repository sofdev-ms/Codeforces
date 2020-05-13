#include<bits/stdc++.h>

using namespace std;
#define ll long long int

int main()
{
   ll t;
   t = 1;	
   cin >> t;
   while(t--){
       ll n , k;
       cin >> n >> k;
       ll a[n];
       ll check = 0;
       for(int i = 0 ;i  < n ; i ++)
       {
          cin >> a[i];
          if(a[i] == k)
          check ++;
       } 
       if(!check)
       {
          cout << "no" << endl;
          continue;
       }
       else
       {
          if( n == 1)
          {
             cout << "yes" << endl;
             continue;
          }
          if(n == 2)
          {
             ll count =0 ;
             if(a[0] >= k)
             count ++;
             if(a[1] >= k)
             count ++;

             if(count == 2)
             cout << "yes" << endl;
             else
             cout << "no" << endl;
             continue;
          }
          check = 0;
          for(int i =0 ;i <  n - 3 + 1; i ++)
          {
             ll count = 0;
             if(a[i] >= k)
             count ++;
             if(a[i + 1] >= k)
             count ++;
             if(a[i + 2] >= k)
             count ++;

             if(count >= 2)
             {
                check = 1;
                break;
             }
          }
          if(check)
          cout <<"yes" << endl;
          else
          cout << "no" << endl;
       }
   }
}