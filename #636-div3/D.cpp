#include<bits/stdc++.h>

using namespace std;
#define ll long long int



int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        ll n , k;
        cin >> n >> k;
        ll a[n];
        for(int i = 0; i < n ; i ++)
        cin >> a[i];
        
        ll temp[2 * k + 2];
        memset(temp , 0 , sizeof(temp));
        for(int i = 0 ; i < n / 2 ; i ++)
        {
            ll sum = a[i] + a[ n - i - 1];
            ll mn = min(a[i] , a[ n - i - 1]);
            ll mx = min(a[i] , a[ n - i - 1]);
            // mn + 1 , sum  - 1 = 1;
            // 2 , mn = 2;
            // sum + 1 , sum + k - mn = 1;
            // sum + k - mn + 1 , 2 * k = 2;
            if(mn >= 2)
            {
                temp[2] +=2 ;
                temp[mn + 1] -= 2;
            }
            if(sum - 1 >= mn + 1)
            {
                temp[mn + 1] ++;
                temp[sum] --;
            }
            if(sum + k - mn >= sum + 1)
            {
                temp[sum + 1] ++;
                temp[sum + k - mn + 1]--;
            }
            if(2 * k >= sum + k - mn + 1)
            {
                temp[sum + k - mn + 1] += 2;
                temp[2 * k + 1] -= 2;
            }
        }
        ll ans = n ;
        ll temp1 = 0;
        for(int i = 2; i <= 2 * k ; i ++)
        {
            temp1 += temp[i];
            ans = min(ans , temp1);
        }
        cout << ans <<endl;
    }
}