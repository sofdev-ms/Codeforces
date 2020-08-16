#include<bits/stdc++.h>

using namespace std;
#define ll long long int

int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        int n , k;
        cin >> n >> k;
        cout << k << endl;
        vector < pair < int , int > > p;
        ll ans[n];
        for(int i =0 ; i < n ; i ++)
        {
            ll x;
            cin >> x;
            ans[i] = x;
            p.push_back({x , i});
        }
        sort(p.begin() , p.end());

        vector < pair < int , int > > odd;
        vector < pair < int , int  > > even;
        for(int i =0 ; i < n ; i ++)
        {
            odd.push_back({p[n - 1].first - p[i].first , p[i].second});
        }
        for(int i =0 ; i < n ; i ++)
        {
            even.push_back({odd[0].first - odd[i].first , odd[i].second});
        }
        
        if( k % 2 == 0)
        {
           // ll ans[n];
            for(int i = 0 ; i < n ; i ++)
            {
                ans[even[i].second] = even[i].first;
            }
        }
        else
        {
           // ll ans[n];
            for(int i = 0 ; i < n ; i ++)
            {
                ans[odd[i].second] = odd[i].first;
            }
        }
        for(auto x: ans)
        cout << x << " ";
        cout << endl;
        

    }
}
