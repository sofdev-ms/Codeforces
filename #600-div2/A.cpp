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
        ll a[n];
        for(int i =0 ; i < n ; i ++)
        {
            cin >> a[i];
        }
        ll b[n];
        vector < int > diff;
        for(int i =0 ;  i< n ; i ++)
        {
            cin >> b[i];
            diff.push_back(b[i] - a[i]);
        }
        int check = 1;
        int i = 0;
        while( i < n && diff[i] == 0)
        {
            i++;
        }
        ll x;
        if( i != n)
        x = diff[i];

        while( i < n && diff[i] == x && x > 0)
        {
            i++;
        }
        while( i < n && diff[i] == 0)
        {
            i++;
        }
        if( i == n)
        cout << "YES" << endl;
        else
        cout << "NO" << endl;
    }
}