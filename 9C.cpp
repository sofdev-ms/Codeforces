#include<bits/stdc++.h>

using namespace std;
#define ll long long int
#define mod 1000000007

int main()
{
   
   ll n;
   cin >> n;
   ll ans = 0;
   stack < ll > s;
   s.push(1);
   while(!s.empty())
   {
       ll t = s.top();
       ans ++;
       s.pop();
       
       ll z = t * 10 + 1;
       ll z1 = t * 10;
       
       if(z <= n)
       s.push(z);
       
       if(z1 <= n)
       s.push(z1);
       
   }
   cout << ans << endl;
}
