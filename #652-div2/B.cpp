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
        int l;
        cin >> l;

        string s;
        cin >> s;

        int zeros = 0;
        for(int i =0 ; i <l ; i ++)
        {
            if(s[i] == '0')
            zeros++;
        }
        string ans = "";
        int x = zeros;
        int i =0;
        while(i < l && s[i] == '0')
        {
            ans += s[i];
            i++;
            zeros--;
        }
        while( i < l && zeros > 1)
        {
            if(s[i] == '0')
            zeros--;
            i++;
        }
        while(i < l && s[i] == '1' && zeros == 1)
        {
            i++;
        }
        while( i  < l)
        ans += s[i ++];

        cout << ans << endl;
        
    }
}
