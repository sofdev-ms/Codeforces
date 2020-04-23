#include <bits/stdc++.h>

using namespace std;
#define ll long long int

int main()
{
    
    ll n, m, k;
    cin >> n >> m >> k;
    char x[n][m];
    bool visited[n][m];
    ll dist[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> x[i][j];
            visited[i][j] = false;
            dist[i][j] = INT_MAX;
        }
    }
    int startx, starty, endx, endy;
    cin >> startx >> starty >> endx >> endy;
    startx--;
    starty--;
    endx--;
    endy--;
    queue<pair<int, int>> q;
    q.push({startx, starty});
    int dx[4] = {-1, 1, 0, 0};
    int dy[4] = {0, 0, -1, 1};
    visited[startx][starty] = true;
    dist[startx][starty] = 0;
    while (!q.empty())
    {
        pair<int, int> p = q.front();
        q.pop();
        int x1 = p.first;
        int y1 = p.second;
        if (x1 == endx && y1 == endy)
        {
            cout << dist[x1][y1];
            return 0;
        }
        for(int i = 0 ; i < 4 ; i ++)
        {
            int x2 = x1 + dx[i];
            int y2 = y1 + dy[i];
            int count = 0;
            while(count < k && x2 >=0 && x2 < n && y2 >=0 && y2 < m && x[x2][y2] == '.')
            {
                if(!visited[x2][y2])
                {
                    dist[x2][y2] = dist[x1][y1] + 1;
                    visited[x2][y2] = true;
                    q.push({x2 , y2});
                }
                else if(dist[x2][y2] <= dist[x1][y1])
                break;

                x2 = x2 + dx[i];
                y2 = y2 + dy[i];
                count++;
            }
        }
    }
    cout << "-1" << endl;
}