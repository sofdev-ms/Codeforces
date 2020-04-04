#include<bits/stdc++.h>

using namespace std;
#define ll long long int

int main()
{
    ll t;
    t = 1;
    cin >> t;
    while(t--)
    {
        ll n,k;
        cin >> n >> k;
        string s;
        cin >> s;
        string temp = "";
        int count[k][26];
        for(int i =0 ; i <k ;i ++)
        {
            for(int j =0 ; j < 26; j ++)
            count[i][j] = 0;
        }
        for(int i = 0; i  < k ;i ++)
        {
            temp += s[i];
        }
        // cout << temp << endl;
        for(int i =0 ; i < n ; i ++)
        {
            count[ i % k][(int)(s[i] -'a')]++;
        }
        int ans = 0 ;
        int z = n / k;
        for(int i = 0 ; i < k / 2 ; i ++)
        {
            int mx = 0;
            for(int j =0 ; j < 26; j ++)
            {
                int total = count[i][j] + count[k - i - 1][j];
                mx = max(total , mx);
            }
            ans += 2* z - mx;
        }
        if(k % 2 != 0)
        {
            int mx = 0;
            for(int j =0 ; j < 26; j ++)
            {
                int total = count[k/2][j];
                mx = max(total , mx);
            }
            ans += z - mx;
        }
        cout << ans << endl;
    }
}