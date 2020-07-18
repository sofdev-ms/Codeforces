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
        vector<pair < int , int > > adj[n + 1];
        int indegree[n + 1] = {0};
        for (int i = 0; i < m; i++)
        {
            int type, x, y;
            cin >> type >> x >> y;
            if (type == 0)
            {
                adj[x].push_back({type , y});
                adj[y].push_back({type , x});
            }
            else
            {
                adj[x].push_back({type , y});
                indegree[y]++;
            }
        }
        vector<pair<int, int>> ans;
        priority_queue<int, vector<int>, greater<int>> pq;

        int visited[n + 1] = {0};
        for (int i = 1; i <= n; i++)
        {
            if (indegree[i] == 0)
            {
                pq.push(i);
                visited[i] = 1;
            }
        }
        int total = 0;
        while (!pq.empty())
        {
            int node = pq.top();
            pq.pop();
            visited[node] = 2;
            total ++;
            for(auto x : adj[node])
            {
                indegree[x.second] -= x.first;
                if(visited[x.second] != 2)
                {
                    ans.push_back({node, x.second});
                }
                if(visited[x.second] ==0 && indegree[x.second] == 0)
                { 
                    pq.push(x.second);
                    visited[x.second] = 1;
                }
            }
        }

        if (total != n)
            cout << "NO" << endl;
        else
        {
            cout << "YES" << endl;
            for (auto x : ans)
            {
                cout << x.first << " " << x.second << endl;
            }
        }
    }
}
