#include<bits/stdc++.h>

using namespace std;
#define ll long long int

int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        ll n , m;
        cin >> n >> m;
        ll ans = n * (n + 1) / 2;
        ll parts = m + 1;
        ll div = (n - m ) / parts;
        ll rem = ( n - m ) % parts;
        ans -= rem * (div + 1)* (div + 2) / 2;
        ans -= (parts - rem ) * (div) * (div + 1) / 2;
        cout << ans << endl;
    }
}