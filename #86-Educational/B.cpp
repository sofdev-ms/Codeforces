#include<bits/stdc++.h>

using namespace std;
#define ll long long int

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while( t-- )
    {
        string s;
        cin >> s;
        int len = s.length();
        int zero = 0;
        int one = 0;
        for(int i = 0 ; i < len ; i ++)
        {
            if(s[i] =='0' )
            zero++;
            else
            one++;
        }

        string ans = "";
        int i = 0;
        while( i < len)
        {
            ans += "01";
            i++;
        }
        if(zero == len || one == len)
        ans = s;
        cout << ans << endl;
    }
}