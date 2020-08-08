#include <bits/stdc++.h>

using namespace std;
#define ll long long int

int main()
{
    ll t;
    //cin >> t;
    t = 1;
    while (t--)
    {
        ll n;
        cin >> n;
        ll count[100001] = {0};
        ll c1 = 0;
        ll c2 = 0, c3 = 0, c4 = 0;
        for (int i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            count[x]++;
        }
        priority_queue<pair<int, int>> pq;
        for (int i = 1; i <= 100000; i++)
        {
            if (count[i] >= 8)
                c1++;
            else if (count[i] >= 6)
                c2++;
            else if (count[i] >= 4)
                c3++;
            else if (count[i] >= 2)
                c4++;
        }

        ll q;
        cin >> q;
        while (q--)
        {
            char x1;
            ll m;
            cin >> x1 >> m;
            bool check = true;
            if (x1 == '+')
            {
                count[m]++;
                if (count[m] == 8)
                    c1++ , c2 --;
                else if (count[m] == 6)
                    c2++ , c3--;
                else if (count[m] == 4)
                    c3++,c4--;
                else if (count[m] == 2)
                    c4++;
            }
            else
            {
                count[m]--;
                if (count[m] == 7)
                    c1-- , c2 ++;
                else if (count[m] == 5)
                    c2-- , c3++;
                else if (count[m] == 3)
                    c3--,c4++;
                else if (count[m] == 1)
                    c4--;
            }

            int x = 0, y = 0;
            x += 2 * (c1);
            x += c2;
            x += c3;
            y += c4 + c2;

            if (x >= 2 || (x >= 1 && y >= 2))
                cout << "YES" << endl;
            else
            {
                cout << "NO" << endl;
            }
        }
    }
}
