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
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        string s;
        cin >> s;
        int  i= n -1 ;
        int ans = 0;
        int count = 0;
        while( i >=0 )
        {
            if(s[i] == 'A')
            {
                ans = max(ans , count);
                count = 0;
            }
            else
            {
                count ++;
            }
            i--;
        }
        
        cout << ans << endl;
    }
    
}
