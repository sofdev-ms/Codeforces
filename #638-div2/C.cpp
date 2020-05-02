#include <bits/stdc++.h>

using namespace std;
#define ll long long int

int main()
{
    ll t;
    t = 1;
    cin >> t;
    while (t--)
    {
        ll n, m;
        cin >> n >> m;
        string s;
        cin >> s;
        string ans = "";
        int len = s.length();
        sort(s.begin(), s.end());
        //cout << s << endl;
        if (m == 1)
        {
            cout << s << endl;
            continue;
        }
        int i = 0;
        ans += s[i + m - 1];
        
        if(s[i] == s[i + m - 1])
        {
            if(s[m] == s[len - 1])
            {
                i = m;

                while(i < len)
                {
                    ans += s[i];
                    i += m;
                }
            }
            else
            {
                for(int j = m ; j < len ; j ++)
                {
                    ans += s[j];
                }
            }
        }
        cout << ans << endl;
    }
}
