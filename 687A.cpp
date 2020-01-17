#include<bits/stdc++.h>

using namespace std;
#define ll long long int

void dfs(vector < int > adj [] , int visited[] , int z ,  int i , int & f)
{
    visited[i] = z;
    for(auto x : adj[i])
    {
        if(visited[x] == -1)
        {
            dfs(adj , visited , !visited[i] , x , f);
        }
        else if(visited[x] == visited[i])
        {
            f = 0;
            break;
        }
    }
}

int main()
{
    ll n,m;
    cin >> n >> m;
    vector < int > adj[n + 1];
    for(int i =0 ; i < m ; i ++)
    {
        int x ,y;
        cin >>x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    int visited[n + 1];
    for(int i = 0 ; i<=n ; i++)
    visited[i] = -1;
    int f = 1;
    for(int i = 1; i <=n ; i ++)
    {
        if(visited[i] == -1)
        {
            visited[i] = 1;
            for(auto x : adj[i])
            {
                if(visited[x] == -1)
                {
                    dfs(adj , visited , !visited[i] , x , f);
                }
                else if(visited[x] == visited[i])
                {
                    
                       
                    f = 0;
                    break;
                }
            }
        }
    }
    if(!f)
    cout << "-1" << endl;
    else
    {
        vector < int > ans,ans1;
        for(int i = 1; i<=n ; i ++)
        {
            if(!visited[i])
            ans.push_back(i);
            else
            ans1.push_back(i);
        }
        cout << ans.size() << endl;
        for(int i =0 ; i < ans.size() ; i ++)
        cout << ans[i] << " ";
        cout << endl;
        
        cout << ans1.size() << endl;
        for(int i =0 ; i < ans1.size() ; i ++)
        cout << ans1[i] << " ";
        cout << endl;
    }
}
