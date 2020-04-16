#include<bits/stdc++.h>

using namespace std;
#define ll long long int
vector < int > ans1;
int dfs(vector < int > adj[] , bool visited[] , int start , ll depth , ll ans[])
{
    depth++;
    visited[start] = true;
    int count = 0;
    ll value = 0;
    for(auto x : adj[start])
    {
        if(!visited[x])
        {
            count += dfs(adj , visited , x , depth , ans);  
            value += ans[x];
        }
    }
    
    ans[start] = value  + (count + 1) * depth - value;

    ans1.push_back((count + 1) * depth - value);
    return count + 1;
}

int main()
{
    ll t;
    t = 1;
    //cin >> t;
    while(t--)
    {
        ll n ,m;
        cin >> n >> m;
        vector < int > adj[n + 1];
        for(int i =0 ; i <  n - 1; i  ++)
        {   
            ll x , y;
            cin >> x >> y;
            adj[x].push_back(y);
            adj[y].push_back(x);
        }
        bool visited[n + 1];
        memset(visited , false , sizeof(visited));

        int start = 1;
        ll ans[ n + 1];
        memset(ans , 0 , sizeof(ans));
        ll depth = 0;
        visited[start] = true;
        int count = 0;
        ll value = 0;
        for(auto x : adj[start])
        {
            if(!visited[x])
            {
                count += dfs(adj , visited , x , depth , ans);  
                value += ans[x];
            }
        }
        
        ans[start] = value + (count + 1) * depth - value;

        ans1.push_back((count + 1) * depth - value);
        ll total = 0;
        sort(ans1.begin() , ans1.end() , greater < int > ());
        // for(int i =0 ; i < n ; i ++)
        // cout << ans1[i] << " ";
        // cout << endl;
        for(int i =0 ; i < m; i  ++)
        {
            total += ans1[i];
        }
        cout << total << endl;
    }
}