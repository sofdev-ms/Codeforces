#include<bits/stdc++.h>

using namespace std;
#define ll long long int

bool check(ll a[] , ll mid , ll k , ll n)
{
    ll total = k;
    for(int i = n / 2 ; i < n ; i ++)
    {
        if(a[i] < mid)
        {
            total -= (mid - a[i]);
        }
        else
        break;
    }
    if(total < 0)
    return false;
    else
    return true;
}

int main(){
    ll t;
    t = 1;
    //cin >> t;
    while(t--){
        ll n, k;
        cin >> n >> k;
        ll a[n];
        for(int i = 0; i < n ; i ++)
        cin >> a[i];
        if( n == 1)
        cout << a[0] + k << endl;
        else
        {
            sort(a , a + n);
              ll l = a[n / 2];
                ll r = 2000000001;
                ll ans = l;
                while( l <= r)
                {
                    ll mid = l + (r - l) / 2;
                    if(check(a , mid , k , n))
                    {
                        ans = mid;
                        l = mid + 1;
                    }
                    else
                    {
                        r = mid - 1;
                    }
                }
                cout << ans << endl;
            
        }
        


    }
}