#include<bits/stdc++.h>
 
using namespace std;
#define ll long long int
#define mod 1000000007
 
int main()
{
    ll a = 1, b = 0;
    ll n;
    cin >> n;
    for(ll i =0 ; i<n ; i ++)
    {
        ll x, y;
        
        x = b % mod;
        y = (((b % mod) * 2) % mod + ((a % mod) * 3)%mod ) % mod;
        a = x;
        b = y;
    }
    cout << a % mod << endl;
}
