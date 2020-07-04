#include<bits/stdc++.h>

using namespace std;
#define ll long long int
#define mod 1000000007
ll ans[2 * 1000000 + 1];
int main()
{
   ll t;
   t = 1;	
   cin >> t;
   
    ans[0] = 0;
    ans[1] = 0;
    ans[2] = 0;
    for(int i = 3 ; i <= 2000000;i ++)
    {
        ans[i] = 2 * ans[i - 2] + ans[i - 1] + (i % 3 == 0 ? 4 : 0);
        ans[i] %= mod;
    }
   while(t--){
        
        ll n;
        cin >> n;     
        cout << ans[n] % mod << endl;
   }
}
