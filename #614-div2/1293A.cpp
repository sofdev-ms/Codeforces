#include<bits/stdc++.h>
 
using namespace std;
#define ll long long int
#define mod 1000000007
 
int main()
{
   ll t;
   cin >> t;
   while( t-- )
   {
        ll n , s , k;
        cin >> n >> s >> k;
        map < ll , bool > m;
        ll mx = INT_MIN;
        ll mn = INT_MAX;
        for(int i = 0 ; i < k ; i ++)
        {
            ll x;
            cin >> x;
            m[x] = true;
            mx = max(mx , x);
            mn = min(mn , x);
        }
        if(m.find(s) == m.end())
        cout << "0" <<endl;
        else
        {
            
            ll i = s + 1;
            while( i <= mx)
            {
                if(!m[i])
                {
                    break;
                }
                i++;
            }
            ll ans = INT_MAX;
            if( i <= n )
            ans = i - s;
            i = s - 1;
            while( i > 0 && i >= mn)
            {
                if(!m[i])
                {
                    ans = min(ans , s - i);
                    break;
                }
                i--;
            }
            if( i!=0 )
            ans = min(ans , s - i);
            cout << ans << endl;
        }
        
   }
}
