#include<bits/stdc++.h>

using namespace std;
#define ll long long int
#define mod 1000000007
ll power(ll n , ll y)
{
    ll ans = 1;
    n = n% mod;
    while(y > 0)
    {
        if(y % 2 != 0)
            ans = (ans * n) % mod; 
        
        y = y / 2;
        n = (n * n) % mod;
    }
    return ans;
}


int main()
{
   ll n;
   cin >> n;
   ll temp = 0;
   for(int  i= 0  ;i < n ;i ++)
   {
       temp = (temp % mod + ((power(7 , i ) % mod) * power(27 , n - i - 1)) % mod)%mod;
       
   }
   temp = (temp * 20) % mod;
   cout << temp << endl;
}
