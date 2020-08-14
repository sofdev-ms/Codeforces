#include<bits/stdc++.h>

using namespace std;
#define ll long long int

int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        int l = s.length();
        vector < int > temp;
        int i = 0;
        while( i < l)
        {
            int count = 0;
            while( i < l && s[i] == '0')
            i++;

            while(i < l && s[i] == '1')
            {
                i++;
                count ++;
            }
            temp.push_back(count);
        }
        sort(temp.begin() , temp.end() , greater < int > ());
        ll ans = 0;
        for(int i =0 ; i < temp.size() ; i += 2)
        ans += temp[i];
        cout << ans << endl;
    }
}
