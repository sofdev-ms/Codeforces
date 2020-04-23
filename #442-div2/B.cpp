#include<bits/stdc++.h>

using namespace std;
#define ll long long int

int main(){
    string s;
    cin >> s;
    int n = s.length();
    ll dp[n][3];
    memset(dp , 0 , sizeof(dp));
    for(int i = 0 ; i < n ; i ++)
    {
        if( i == 0)
        {
            if(s[i] == 'a')
            {
                dp[i][0] = 1;
                dp[i][2] = 1;
            }
            else
            {
                dp[i][1] = 1;
            }
        }
        else
        {
            if(s[i] == 'a')
            {
                dp[i][0] = dp[i - 1][0] + 1;
                dp[i][2] = max(dp[i - 1][2] + 1 , dp[i - 1][1] + 1);
                dp[i][1] = max(dp[i - 1][0] + 1 , dp[i - 1][1]);
            }
            else
            {
                dp[i][0] = dp[i - 1][0];
                dp[i][2] = dp[i - 1][2];
                dp[i][1] = max(dp[i - 1][0] + 1 , dp[i - 1][1] + 1);
            }
        }
        
    }
    cout << max(dp[n - 1][0] , max(dp[n - 1][1] , dp[ n -1 ][2]));
}