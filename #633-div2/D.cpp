#include<bits/stdc++.h>

using namespace std;
#define ll long long int
int ans1 = 1;
int check[100001][2];
ll dfs(vector < int > adj[] , bool visited[], int root, bool  & even , bool & odd)
{
    visited[root] = true;
       // int ans2 = 0;
        bool already = 0;
        ll total = 0;
        ll child =0;
        for(auto x : adj[root])
        {
            if(!visited[x])
            {
                child++;
                ll t = dfs(adj , visited , x , even , odd);
                if( t == 1 && !already)
                {
                    total += t;
                    already = true;
                }
                else if( t!=1)
                total += t;
                if(check[x][0] == 1)
                {
                    check[root][1] = 1;
                }
                if(check[x][1] == 1)
                {
                    check[root][0] = 1;
                }
            }

        }
       

        if(child == 0)
        {
            check[root][0] = 1;
        }
        if(check[root][0] && check[root][1])
        ans1 = 3;

        return total + 1;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    t = 1;
    //cin >> t;
    while(t--)
    {   
        ll n;
        cin >> n;
        memset(check , 0 , sizeof(check));
        vector < int > adj[n + 1];
        ll degree[n + 1];
        memset(degree , 0 , sizeof(degree));
        int root = -1;
        for(int i =0 ; i < n  - 1; i ++)
        {
            ll x, y;
            cin >> x >> y;
            adj[x].push_back(y);
            adj[y].push_back(x);
            degree[x] ++;
            degree[y] ++;
            if(degree[x] > 1)
            root = x;
            if(degree[y] > 1)
            root = y;
        }
        bool visited[n + 1];
        memset(visited , false , sizeof(visited));
        bool even =false;
        bool odd = false;
        visited[root] = true;
        int ans2 = 0;
        bool already = 0;
        ll total = 0;
        // cout << root << endl;
        for(auto x : adj[root])
        {
            if(!visited[x])
            {
                ll t = dfs(adj , visited , x , even , odd);
                if(check[x][0] == 1)
                {
                    check[root][1] = 1;
                }
                if(check[x][1] == 1)
                {
                    check[root][0] = 1;
                }
                if( t == 1 && !already)
                {
                    total += t;
                    already = true;
                }
                else if( t!=1)
                total += t;
            }

        }
        if(check[root][0] && check[root][1])
        ans1 = 3;
        cout << ans1 << " " << total << endl;
    }
}