#include<bits/stdc++.h>
 
using namespace std;
#define ll long long int
 
int main()
{
    ll n , m;
    cin >> n >> m;
    vector < pair < ll , ll > > v;
    for(int i =0 ; i < n ;  i++)
    {
        ll x ,y;
        cin >> x >> y;
        v.push_back({x , y});
    }
    sort(v.begin() , v.end());
    int i = 0;
    ll total  = 0;
    ll ans = 0;
    int j = 0;
    while( i <  n && j < n)
    {
        while(j < n && v[j].first - v[i].first < m)
        {
            total += v[j].second;
            j++;
        }
        ans = max(ans , total);
        while( j!=n && i < j && v[j].first -  v[i].first >= m)
        {
            total -= v[i].second;
            i++;
        }
    }
    cout << ans << endl;
}
