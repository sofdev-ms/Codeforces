#include<bits/stdc++.h>

using namespace std;
#define ll long long int


int main()
{
    ll n;
    cin >> n;
    if( n== 1 || n == 2)
    cout << "-1" <<endl;
    else
    {
        if( n % 2 != 0)
        {
            cout << (1 + n * n)/2 << " " << (n * n - 1) /2;
        }
        else
        {
            ll t = n * n / 2;
            cout << (2 + t) / 2 << " " << ( t - 2)/2 << endl;
        }
    }
    
}
