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
        ll n, m;
        cin >> n >> m;
        ll a[n];
        ll b[m];
        int count[1001] = {0};
        int count1[1001] = {0};
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            count[a[i]]++;
        }
        for (int i = 0; i < m; i++)
        {
            cin >> b[i];
            count1[b[i]]++;
        }
        int ans = -1;
        for(int i = 1; i <= 1000 ; i++)
        {
            if(count[i] > 0 && count1[i] > 0)
            {
                ans = i;
                break;
            }
        }
        if(ans == -1)
        cout << "NO" << endl;
        else
        {
            cout << "YES" << endl;
            cout << "1 " << ans << endl;
        }
    }
}
