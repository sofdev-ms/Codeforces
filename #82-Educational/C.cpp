#include <bits/stdc++.h>

using namespace std;
#define ll long long int

void dfs(vector<int> adj[], int root, string &ans, bool visited[])
{
    visited[root] = true;
    ans += (char)(root + 'a');
    for (auto x : adj[root])
    {
        if (!visited[x])
        {
            dfs(adj, x, ans, visited);
        }
    }
}

int main()
{
    ll t;
    t = 1;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int len = s.length();
        vector<int> adj[26];
        int degree[26] = {0};
        int done[26][26];
        memset(done , 0 , sizeof(done));
        int count = 0;
        for (int i = 1; i < len; i++)
        {
            int x = (int)(s[i] - 'a');
            int y = (int)(s[i - 1] - 'a');
            if(!done[x][y] && x != y)
            {
                done[x][y] = 1;
                done[y][x] = 1;
                adj[x].push_back(y);
                adj[y].push_back(x);
                degree[x]++;
                degree[y]++;
                count ++;
            }
        }
        int check = 1;
        int root = -1;
        for (int i = 0; i < 26; i++)
        {
            if (degree[i] > 2)
            {
                check = 0;
                break;
            }
            else if (degree[i] == 1)
            {
                root = i;
            }
        }
        if(count == 0)
        root = 0;
        if (root == -1 || !check)
            cout << "NO" << endl;
        else
        {
            string ans = "";
            bool visited[26] = {0};
            visited[root] = true;
            ans += (char)(root + 'a');
            for (auto x : adj[root])
            {
                if (!visited[x])
                {
                    dfs(adj, x, ans, visited);
                }
            }
            for (int i = 0; i < 26; i++)
            {
                if (!visited[i])
                    ans += (char)(i + 'a');
            }
            cout << "YES" << endl;
            cout << ans << endl;
        }
    }
}