#include<bits/stdc++.h>

using namespace std;
#define ll long long int
#define mod 1000000007



int main()
{
   ll n , m  ,q;
   cin >> n >> m >> q;
   ll x = __gcd(n,m);
   ll t = n / x;
   ll t1 = m / x;
   
   while(q--)
   {
       ll a , b , c , d;
       cin >> a >> b >> c >> d;
       b--;
       d--;
       if(a == 1)
       b = b /t;
       else
       b = b/t1;
       
       if(c == 1)
       d = d /t;
       else
       d = d/t1;
       if( b == d)
       cout << "YES" <<endl;
       else
       cout << "NO" << endl;
   }
 
  
}
