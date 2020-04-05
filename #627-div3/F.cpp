#include<bits/stdc++.h>

using namespace std;
#define ll long long int
ll mx[200003][2];
int dfs(int start , bool visited[] , vector < int > adj[] , ll ans[] , ll color[] , ll parent[])
{
    visited[start] = true;
    if(color[start] == 1)
    ans[start] = 1;
    else
    ans[start] = -1;
    
    for(auto x : adj[start])
    {
        
        if(!visited[x])
        {
            parent[x] = start;
            int temp = dfs(x , visited, adj ,ans , color , parent);
            ans [start] +=  max( 0 , temp);
            if(temp >= mx[start][0])
            {
                mx[start][1] = mx[start][0];
                mx[start][0] = temp;
            }
            else if(temp > mx[start][1])
            mx[start][1] = temp;
            
        }
    }
    return ans[start];
}

void dfs1(int start , bool visited[] , vector < int > adj[] , ll ans [] , ll parent[])
{
    visited[start] = true;
    if(ans[start] >= 0)
    ans[start] = max(ans[start] , ans[parent[start]]);
    else
    ans[start] = max(ans[start] , ans[parent[start]] - 1);
    for(auto x : adj[start])
    {
        if(!visited[x])
        {
            dfs1(x , visited , adj , ans , parent);
        }
    }

}

int main(){

    ll n;
    cin >> n;
    ll color[n + 1];
    ll ans[n + 1];
    bool visited[n + 1];
    ll present[n + 1];
    ll parent[n + 1];
    bool visited2[n + 1];
    for(int i = 1; i <=n ; i ++)
    {
        cin >> color[i];
        ans[i] = 0;
        visited[i] = 0;
        visited2[i] = 0;
        present[i] = 0;
        mx[i][0] = 0;
        mx[i][1] = 0;
    }

    vector < int > adj[n + 1];
    for(int i = 0 ; i < n - 1; i ++)
    {
         int x , y;
         cin >> x >> y;
         adj[x].push_back(y);
         adj[y].push_back(x);

    }
    
    int start = 1;
    parent[start] = 1;
    visited[start] = true;
    if(color[start] == 1)
    ans[start] = 1;
    else
    ans[start] = -1;
    for(auto x : adj[start])
    {
        
        if(!visited[x])
        {
            parent[x] = start;
            int temp = dfs(x , visited, adj ,ans , color , parent);
            ans [start] +=  max( 0 , temp);
            if(temp >= mx[start][0])
            {
                mx[start][1] = mx[start][0];
                mx[start][0] = temp;
            }
            else if(temp > mx[start][1])
            mx[start][1] = temp;
            
        }
    }

    // for(int i = 1 ; i <= n ; i ++)
    // cout << ans[i] << " ";
        
    //     cout << endl;   
    start = 1;
    visited2[1] = true;
    for(auto x : adj[start])
    {
        if(!visited2[x])
        {
            dfs1(x , visited2 , adj , ans , parent);
        }
    }



    for(int i = 1 ; i <= n ; i ++)
    cout << ans[i] << " ";
        

}
