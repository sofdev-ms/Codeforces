#include<bits/stdc++.h>

using namespace std;
#define ll long long int

int main()
{
   ll t;
   t = 1;	
   cin >> t;
   while(t--){
        ll n;
        cin >> n;
        ll a[n];
        for(int i =0 ; i < n ; i ++)
        {
            cin >> a[i];
        }  
        int count = 0;
        for(int i = 0 ;i  < n ; i ++)
        {
            ll x;
            cin >> x;
            if(x == 0)
            count ++;
        }
        if(count == 0 || count == n)
        {
            string ans = "YES";
            for(int i = 1; i < n ; i ++)
            {
                if(a[i] < a[i - 1])
                {
                    ans = "NO";
                    break;
                }
            }
            cout << ans << endl;
        }
        else
        cout << "YES" << endl;
   }
}
