#include<bits/stdc++.h>

using namespace std;
#define ll long long int

bool check(ll ans , ll a[] , ll n)
{
    ll total = 0;
    for(int i = 2 ; i<= 100 ; i ++)
    {
        ll c = 0;
        int i1 = 0;
        int j = n - 1;
        while(i1 < j)
        {
            if(a[i1] + a[j] == i)
            {
                c++;
                i1++;
                j--;
            }
            else if(a[i1] + a[j] > i)
            {
                j--;
            }
            else
            {
                i1++;
            }
            
        }
        total = max(total , c);

    }

    return ans <= total;
}

int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        ll a[n];
        for(int i =0 ; i < n ; i ++)
        cin >> a[i];

        sort(a , a+n);
        if( n == 1)
        cout << "0" << endl;
        else
        {
            ll ans = 1;
            ll l = 1;
            ll r = n / 2;
            while(l <= r)
            {
                ll mid = l + (r - l) / 2;
                if(check(mid , a , n))
                {
                    ans = mid;
                    l = mid + 1;
                }
                else
                r = mid - 1;
            }



            cout << ans << endl;    
        }
        
         
    }
}
