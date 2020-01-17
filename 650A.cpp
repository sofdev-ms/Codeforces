#include<bits/stdc++.h>

using namespace std;
#define ll long long int
#define mod 1000000007

int main()
{
    ll n;
    cin >> n;
    vector < pair < int , int > > v;
    map < pair < int ,int > , int >p;
    map < int , int > m;
    map < int , int > m1;
    for(int i = 0 ; i < n ; i ++)
    {
        ll x, y;
        cin >> x >> y;
        v.push_back({x, y});
        p[{x, y}]++;
        m[x]++;
        m1[y]++;
    }
    ll ans =0 ;
    for(int i = 0 ; i < n ; i ++)
    {
        ll a = --m[v[i].first];
        ll b = --m1[v[i].second];
        ll total = a + b;
        //cout << a << " " << b << endl;
        total -= ( --p[{v[i].first , v[i].second}]);
        ans += total;
        //cout << total << endl;
    }
    cout << ans << endl;
    
    
}
