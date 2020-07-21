#include <bits/stdc++.h>

using namespace std;
#define ll long long int

int main()
{
    ll t;
    t = 1;
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
        int count = 0;
        int i = 0;
        bool check = true;
        while (i < n && a[i] == 1)
        {
            i++;
            count++;
            check = !check;
        }
        if (i != n)
        {
            if (check)
                cout << "First" << endl;
            else
                cout << "Second" << endl;
        }
        else
        {
            if (!check)
                cout << "First" << endl;
            else
                cout << "Second" << endl;
        }
    }
}
