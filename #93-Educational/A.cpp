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
        cin >> a[i];

        if(a[0] + a[1] > a[n - 1])
        cout << "-1" << endl;
        else
        {
            cout << "1 2 " << n << endl;
        }
        
    }
}
