#include<bits/stdc++.h>

using namespace std;
#define ll long long int
ll dp[2002][2002];
int main(){

    ll t;
    t = 1;
    //cin >> t;
    
    while(t--)
    {
        ll n , h , l , r;
        cin >> n >> h >> l >> r;
        ll a[n];
        ll ans = 0;
        cin >> a[0];
        dp[0][0] = 0;
        dp[0][1] = 0;
        if(a[0] >= l && a[0] <= r)
        dp[0][0] = 1;

        if(a[0] - 1 >= l && a[0] - 1 <= r)
        dp[0][1] = 1;
        ll total = 0 ;
        total += a[0];
        ans = max(ans , max(dp[0][0] , dp[0][1]));
        for(int i = 1 ; i < n ; i ++)
        {
            cin >> a[i];
            total += a[i];
            // total %= h;
            for(int j = 0 ; j <= i + 1; j ++)
            {

                if( j > 0 && j!= i + 1)
                dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - 1]);
                else if( j == 0)
                dp[i][j] = dp[i -1][j];
                else
                dp[i][j] = dp[i - 1][j - 1];

                if((total - j + h) % h >= l && (total - j + h) % h <= r)
                {
                    dp[i][j] += 1;
                }
                
                ans = max(ans , dp[i][j]);
            }
        }
        
        cout << ans << endl;
    }
        

}