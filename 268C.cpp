#include<bits/stdc++.h>

using namespace std;
#define ll long long int


int main()
{
    ll n,m;
    cin >> n >> m;
    ll x = min(n , m);
    cout << x + 1 << endl;
    ll i = 0;
    ll j = x;
    for(int k = 0 ; k <=x; k ++)
    {
        cout << i << " " << j  << endl;
        i++;
        j--;
    }
    
}
