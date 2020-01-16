#include<bits/stdc++.h>
 
using namespace std;
#define ll long long int
 
int main()
{
    ll n;
    cin >> n;
    ll a[n][2];
    for(int i =0 ; i < n ; i ++)
    cin >> a[i][0] >> a[i][1];
 
    ll dp[n][3];
    memset(dp, 0 , sizeof(dp));
    dp[0][0] = 0;
    dp[0][1] = 1;
    if( n == 1 || (a[0][0] + a[0][1] < a[1][0]) )
    dp[0][2] = 1;
    else
    dp[0][2] = 0;
    for(int i = 1 ; i < n ; i ++)
    {
        dp[i][0] = max(dp[i - 1][0] , max(dp[i - 1][1]  , dp[i - 1][2]));
        dp[i][2] = max(dp[i - 1][0] , max(dp[i - 1][1]  , dp[i - 1][2]));
        if( (a[i][0] - a[i][1] > a[i - 1][0]) )
        dp[i][1] = 1 + max(dp[i - 1][0] , dp[i - 1][1]);
        else
        dp[i][1] = max(dp[i - 1][0] , dp[i - 1][1]);
        if( (a[i][0] - a[i][1] > a[i - 1][0] + a[i - 1][1]))
        dp[i][1] = max(dp[i][1] , 1 + dp[i - 1][2]);
        
        
        if( i + 1 == n || (a[i][0] + a[i][1] < a[i + 1][0]) )
        dp[i][2] += 1;
        
    }
    cout << max(dp[n - 1][0] , max(dp[n - 1][1]  , dp[n - 1][2])) << endl;
}
