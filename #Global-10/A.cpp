#include <bits/stdc++.h>

using namespace std;
#define ll long long int

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        bool check = false;
        for (int i = 1; i < n; i++)
        {
            if (a[i] != a[0])
            {
                check = true;
            }
        }
        if(check)
        cout << "1" << endl;
        else
        cout << n << endl;
    }
}
