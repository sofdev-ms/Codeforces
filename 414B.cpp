#include<bits/stdc++.h>
 
using namespace std;
#define ll long long int
#define mod 1000000007
 
int main()
{
    ll n , k;
    cin >> n >> k;
    ll dp[n + 1][k + 1];
    memset(dp , 0 , sizeof(dp));
    for(ll i = 0 ; i <=n ; i ++)
    dp[i][1] = 1;
    
    for(ll i = 1 ; i <k ; i ++)
    {
        for(ll j = 1; j <=n ; j ++)
        {
            for( ll m = j ; m<=n ; m+=j)
            {
                dp[m][i + 1] = (dp[m][i + 1] % mod + dp[j][i] % mod)%mod;
            }
        }
    }
    ll total = 0;
    for(ll i = 1; i<=n ; i ++)
    {
        total = (total % mod + dp[i][k] % mod) % mod;
    }
    cout << total << endl;
}
