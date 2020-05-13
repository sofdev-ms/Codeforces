#include <bits/stdc++.h>

using namespace std;
#define ll long long int

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    t = 1;
    //cin >> t;
    while (t--)
    {
        ll n, m, q;
        cin >> n >> m >> q;
        vector<string> temp;
        int a[n][m];
        memset(a, 0, sizeof(a));
        for (int i = 0; i < n; i++)
        {
            string s;
            cin >> s;
            temp.push_back(s);
        }
        int dx[4] = {1, -1, 0, 0};
        int dy[4] = {0, 0, -1, 1};
        queue<pair<int, int>> q1;
        ll count = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (i + 1 < n && temp[i + 1][j] == temp[i][j])
                {
                    if (a[i][j] != 1)
                    {
                        count++;
                        q1.push({i, j});
                    }
                    if (a[i + 1][j] != 1)
                    {
                        count++;
                        q1.push({i + 1, j});
                    }
                    a[i][j] = 1;
                    a[i + 1][j] = 1;
                }
                if (j + 1 < m && temp[i][j + 1] == temp[i][j])
                {
                    if (a[i][j] != 1)
                    {
                        count++;
                        q1.push({i, j});
                    }
                    if (a[i][j + 1] != 1)
                    {
                        count++;
                        q1.push({i, j + 1});
                    }
                    a[i][j] = 1;
                    a[i][j + 1] = 1;
                }
            }
        }
        while (!q1.empty() && count < n * m)
        {
            pair<int, int> p = q1.front();
            q1.pop();
            for (int i = 0; i < 4; i++)
            {
                int x1 = p.first + dx[i];
                int y1 = p.second + dy[i];
                if (x1 >= 0 && x1 < n && y1 >= 0 && y1 < m && a[x1][y1] == 0 && temp[p.first][p.second] != temp[x1][y1])
                {
                    a[x1][y1] = a[p.first][p.second] + 1;
                    count++;
                    q1.push({x1, y1});
                }
            }
        }
        // for(int i = 0 ;i < n ; i ++)
        // {
        //     for(int j =0 ; j < m ; j ++)
        //     {
        //         cout << a[i][j] << " ";
        //     }
        //     cout << endl;
        // }
        for (int i = 0; i < q; i++)
        {
            ll x, y, p;
            cin >> x >> y >> p;
            x--;
            y--;
            if (a[x][y] == 0 || a[x][y] > p)
                cout << temp[x][y] << endl;
            else
            {
                int diff = (p - a[x][y]) % 2;
                if (diff == 0)
                {
                    cout << !(int)(temp[x][y] - '0') << endl;
                }
                else
                {
                    cout << temp[x][y] << endl;
                }
            }
        }
    }
}
