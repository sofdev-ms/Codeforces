#include<bits/stdc++.h>

using namespace std;
#define ll long long int

int main(){

    ll t;
    t = 1;
    cin >> t;
    
    while(t--)
    {
        string s;
        cin >> s;
        int l = s.length();
        int ans = 0;
        int start = 0;
        for(int i = 0 ; i < l ; i ++)
        {
            if(s[i] == 'R')
            {
                ans = max(ans , i + 1 - start);
                start = i + 1;
            }
        }
        ans = max(ans , l + 1 - start);
        cout << ans << endl;
    }

}