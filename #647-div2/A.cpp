#include<bits/stdc++.h>

using namespace std;
#define ll long long int

int main()
{
   ll t;
   t = 1;	
   cin >> t;
   while(t--){
        ll a , b;
        cin >> a >> b;
        if( a == b)
        {
            cout << 0 << endl;continue;
        }
        ll x =  max(a , b);
        b =min(a , b);
        a = x;
        if(a > b)
        {
            ll temp = a / b;
            if(a % b !=0)
            {
                cout << -1 << endl;
            }
            else
            {
                ll count = 0;
                while(temp > 0 && temp % 2 == 0)
                {
                    count ++;
                    temp /= 2;
                }
                if(temp <= 1)
                {
                    ll ans = 0;
                    if(count % 3 != 0)
                    ans = 1;
                    cout << count / 3 + ans << endl;
                }
                else
                cout << "-1" << endl;
            }
        }
        
   }
}
