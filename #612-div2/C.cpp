#include<bits/stdc++.h>
 
using namespace std;
#define ll long long int
#define mod 1000000007
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    t = 1;
    //cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int a[n];
        int even = n / 2;
        int odd = ( n + 1) / 2;
 
        for(int i = 0 ;i < n ; i++)
        {
            cin >> a[i];
            if(a[i] % 2 == 0 && a[i]!=0)
            even --;
            else if(a[i] % 2!=0)
            odd --;
        }
        //cout << even << " " << odd << endl;
        int dp[n][odd + 1][even + 1][2];
        for(int i = 0 ; i< n ; i ++)
        {
            for(int j =0 ; j <= odd ; j ++)
            {
                for(int k = 0; k <= even ; k ++)
                {
                    if( i == 0)
                    {
                        //cout << i << " " << j << " " << k << endl;
                        if( k!=0 || a[i]!=0)
                        dp[i][j][k][0] = 0;
                        else
                        dp[i][j][k][0] = 101;
                        
                        if(j!=0 || a[i]!=0)
                        dp[i][j][k][1] = 0;
                        else
                        dp[i][j][k][1] = 101;
                    }
                    else if(a[i] != 0)
                    {
 
                        if(a[i] % 2 == 0)
                        {
                            if(a[i - 1] == 0)
                            dp[i][j][k][0] = min(dp[i - 1][j][k][0] , dp[i - 1][j][k][1] + 1);
                            else
                            {
                             if(a[i - 1]  % 2 == 0)
                             {
                                dp[i][j][k][0] = dp[i - 1][j][k][0];
                             }
                             else
                             {
                                 dp[i][j][k][0] = dp[i - 1][j][k][1] + 1;
                             }
                            }
                        }
                        else
                        {
                            if(a[i - 1] == 0)
                            dp[i][j][k][1] = min(dp[i - 1][j][k][0] + 1 , dp[i - 1][j][k][1]);
                            else
                            {
                             if(a[i - 1]  % 2 == 0)
                             {
                                dp[i][j][k][1] = dp[i - 1][j][k][0] + 1;
                             }
                             else
                             {
                                 dp[i][j][k][1] = dp[i - 1][j][k][1];
                             }
                            }
                        }
                    }
                    else
                    {
                        //cout << i << " " << j << " " << k << endl;
                        if(a[i - 1] == 0)
                        {
                            if( k - 1 >= 0)
                            dp[i][j][k][0] = min(dp[i - 1][j][ k- 1][0],dp[i -1][j][k - 1][1] + 1);
                            else
                                dp[i][j][k][0] = 101;
                            if( j - 1 >= 0)
                            dp[i][j][k][1] = min(dp[i - 1][j - 1][ k][0] + 1,dp[i -1][j - 1][k][1]);
                            else
                            {
                                //cout << i << " " << j << " " << k << endl;
                                dp[i][j][k][1] = 101;
                            }
                        }
                        else
                        {
 
                            if(a[i - 1] % 2 == 0)
                            {
 
                                if( k - 1 >= 0)
                                dp[i][j][k][0] = dp[i - 1][j][k - 1][0];
                                else
                                dp[i][j][k][0] = 101;
 
                                if( j - 1 >= 0)
                                dp[i][j][k][1] = dp[i - 1][j - 1][k][0] + 1;
                                else
                                {
 
                                    dp[i][j][k][1] = 101;
                                }
                            }
                            else
                            {
                                if( k - 1 >= 0)
                                dp[i][j][k][0] = dp[i - 1][j][k - 1][1] + 1;
                                else
                                dp[i][j][k][0] = 101;
                                if( j - 1 >= 0)
                                dp[i][j][k][1] = dp[i - 1][j - 1][k][1];
                                else
                                dp[i][j][k][1] = 101;
                            }
                        }
                    }
                }
            }
        }
        ll ans ;
        if(a[n - 1] != 0)
        {
            if(a[n - 1] % 2 == 0)
            ans = dp[n - 1][odd][even][0];
            else
            ans = dp[n - 1][odd][even][1];
        }
        else
        ans = min(dp[n - 1][odd][even][1] , dp[n - 1][odd][even][0]);
        cout << ans << endl;
    }
 
    return 0;
 
}
