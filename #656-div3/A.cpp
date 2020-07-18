#include<bits/stdc++.h>

using namespace std;
#define ll long long int

int main()
{
   ll t;
   t = 1;	
   cin>> t;
   while(t--){
       ll x , y , z;
       cin >> x >> y >> z;
       if(max(x , y) != max( y, z) || max(x , y) != max(x , z))
       {
           cout << "NO" << endl;
       }      
       else
       {
           cout << "YES" << endl;
            if(x == y)
            cout << x << " " << z << " " << z << endl;
            else if( y == z)
            cout  << x << " " << x << " " << z << endl;
            else if( x == z)
            cout << y << " " << z << " " << y << endl;

       }
   }
}
