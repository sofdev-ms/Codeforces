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
        if( (n / 2) % 2 != 0 )
        cout << "NO" << endl;
        else
        {
            cout << "YES" << endl;
            for(int i = 1; i <= n /2 ; i ++)
            cout << 2 * i << " ";
            for(int i = 1; i<=n /2 - 1 ; i++)
            cout << 2*  i - 1 << " ";
            cout << n + ( n / 2 - 1);
            cout << endl;
        }
    }
}