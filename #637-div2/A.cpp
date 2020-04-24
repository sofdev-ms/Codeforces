#include<bits/stdc++.h>

using namespace std;
#define ll long long int

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    t = 1;
    cin >> t;
    while(t--)
    {
        ll n , a , b , c , d;
        cin >> n >> a >> b >> c >>d;
        bool check = 1;
        ll x = (a - b) * n;
        ll y = (a + b) * n;
        if( ( c + d) < x || (c - d) > y)
        cout << "No" << endl;
        else
        cout << "Yes" << endl;

    }

}