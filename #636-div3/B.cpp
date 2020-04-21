#include<bits/stdc++.h>

using namespace std;
#define ll long long int

int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        ll ans;
        for(ll i = 2 ; i < 32 ; i ++)
        {
            ll temp = 1 << i;
            temp--;
            if( n % temp == 0)
            {
                ans = n / temp;
                break;
            }
        }
        cout << ans << endl;
    }
}