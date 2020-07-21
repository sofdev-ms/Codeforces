#include<bits/stdc++.h>

using namespace std;
#define ll long long int

int main()
{
   ll t;
   t = 1;	
  // cin >> t;
   while(t--){
         ll x1 , y1 , x2 , y2;
         cin >> x1 >> y1 >> x2 >> y2 ;
         ll x , y;
         cin >> x >> y;
         x1 = (x2 - x1);
         y1 = (y2 - y1);

         bool check = true;
         if(x1 % x !=0 || y1 % y !=0)
         check = false;
         int a = x1 / x;
         int b = y1 / y;
         if(check && (b - a) % 2 == 0)
         cout << "YES" << endl;
         else
         cout << "NO" << endl;    
   }
}
