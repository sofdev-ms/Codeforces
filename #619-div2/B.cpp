#include<bits/stdc++.h>

using namespace std;
#define ll long long int

bool intersect(vector < pair < ll , ll > > &v ,ll &ans1)
{
    int size = v.size();
    ll mn = v[0].first;
    ll mx = v[0].second;
    // cout << mn << " " << mx << endl;
    for(int i = 1 ; i < size;i++)
    {
        if(v[i].second < mn || v[i].first > mx)
        return false;
        else
        {
            mn = max(mn , v[i].first);
            mx = min(mx , v[i].second);
            // cout << mn << " " << mx << endl;
        }
    }
    ans1 = mn;
    return true;
}

bool check(ll mid , ll a[] , ll & ans1 , ll n)
{
    vector < pair < ll , ll > > v;
    for(int i = 0; i < n ; i ++)
    {
        if(a[i] == -1)
        {
            if( i > 0 && a[i - 1] != -1)
            {
                v.push_back({max( (ll) 0 , a[i - 1] - mid) , min((ll)1000000000 , a[i - 1] + mid)});
            }

            if( i  + 1 < n && a[i + 1] != -1)
            {
                v.push_back({max( (ll) 0 , a[i + 1] - mid) , min((ll)1000000000 , a[i + 1] + mid)});
            }
        }
        else
        {
            if( i > 0 && a[i - 1] != -1)
            {
                if(abs(a[i] - a[i - 1]) > mid)
                return false;
            }
        }
    }
    return intersect(v , ans1);

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
        ll diff = -1;
        ll count = 0;
        for(int i = 0 ; i < n ; i ++)
        {
            
            cin >> a[i];
            if( i!= 0)
            {
                diff = max(diff , abs(max(a[i] , (ll) 0 ) - max(a[i - 1] , (ll) 0 )));
            }
            if(a[i] == -1)
            count ++;
        }
        // cout << diff << endl;
        if(count == n || diff == 0)
        {
            cout << 0 << " " << 0 << endl;
            continue;
        }
       // cout << diff << endl;
        ll l = 0;
        ll r = diff;
        ll ans = diff;
        ll ans1 = -1;
        while( l <= r )
        {
            ll mid = l  + ( r-  l ) / 2;
            if(check(mid , a, ans1 , n))
            {
                ans = mid;
                r = mid - 1;
            }
            else
            l = mid + 1;
        }
        cout << ans << " " << ans1 << endl;
    }
}