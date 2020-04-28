#include <bits/stdc++.h>

using namespace std;
#define ll long long int
#define mod 1000000007

int main()
{
    ll t;
    t = 1;
    //cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int len = s.length();
        ll dp[len + 1];
        dp[0] = 1;
        dp[1] = 2;
        ll ans[len + 1];
        ans[0] = 1;
        ans[1] = 1;
        for(int i = 2; i <= len ; i ++)
        {
            ans[i] = (dp[i - 2] + 1) % mod;
            dp[i] = (dp[i - 1] + ans[i]) % mod;
        }

        ll ans1 = 1;
        int i = 0;
        while( i < len )
        {
            ll count = 0;
            while( i < len && s[i] != 'u' && s[i] != 'n')
            {
                if(s[i] == 'm' || s[i] == 'w')
                {
                    cout << "0";
                    return 0;
                }
                i++;
            }
            while( i < len && s[i] == 'u')
            {
                count ++;
                i++;
            }
            
            ans1 = ((ans1 % mod) * ans[count] )%mod;
            count = 0;
            while( i < len && s[i] == 'n')
            {
                count ++;
                i++;
            }
            ans1 = ((ans1 % mod) * ans[count] )%mod;
        }
        cout << ans1 << endl;


    }

}
