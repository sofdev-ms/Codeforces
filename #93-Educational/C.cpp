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
        string s;
        cin >> s;
        map<int, int> count;
        int sum[n];
        sum[0] = 0;

        for (int i = 0; i < n; i++)
        {
            if (i != 0)
                sum[i] = sum[i - 1];

            sum[i] += (int)(s[i] - '0');
            count[i + 1 - sum[i]]++;
            //cout << i + 1 - sum[i] << " ";
        }
      //  cout << endl;
        ll ans = 0;
        for (int i = 0; i < n; i++)
        {
            if (i == 0)
            {
                ans += count[0];
                count[i + 1 - sum[i]]--;
            }
            else
            {
                //cout << ans << "Dsa " << endl;
                ans += count[i - sum[i - 1]];
                count[i + 1 - sum[i]]--;
                
            }
        }
        cout << ans << endl;
    }
}
