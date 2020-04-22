#include<bits/stdc++.h>

using namespace std;
#define ll long long int
int dist[ 200001][3];
void BFS(vector<int> adj[], int src, int d, int v) 
{ 
    list<int> queue;  
    bool visited[v]; 
    for (int i = 0; i < v; i++) { 
        visited[i] = false; 
        dist[i][d] = INT_MAX; 
    } 
    visited[src] = true; 
    dist[src][d] = 0; 
    queue.push_back(src); 
    while (!queue.empty()) { 
        int u = queue.front(); 
        queue.pop_front(); 
        for (int i = 0; i < adj[u].size(); i++) { 
            if (visited[adj[u][i]] == false) { 
                visited[adj[u][i]] = true; 
                dist[adj[u][i]][d] = dist[u][d] + 1; 
                queue.push_back(adj[u][i]); 
            } 
        } 
    } 
} 

int main(){
    ll t;
    cin >> t;
    while(t--)
    {
        ll n , m , a , b , c;
        cin >> n >> m >> a >> b >> c;
        vector < ll > cost;
        for(int i = 0; i < m ; i ++)
        {
            ll x;
            cin >> x;
            cost.push_back(x);
        }
        vector < int > adj[n + 1];
        for(int i =0 ;  i< m ; i ++)
        {
            int x , y;
            cin >> x >> y;
            adj[x].push_back(y);
            adj[y].push_back(x);
        }
        
        
        // the best possible ans would be a - b - c direct path
        // but there could be some intersection in between if there is no direct shortest path
        //  a - x , x - b , b - x , x - c 
        // so after finding shortest distance of every node from a , b , c 
        // iterate over every node to find if it's feasible intersection
        
        BFS(adj , a , 0 , n + 1);
       
        BFS(adj , b , 1 , n + 1);
       
        BFS(adj , c , 2 , n + 1);
        
        sort(cost.begin() , cost.end());

        ll pre[m + 1];
        pre[0] = 0;
        for(int i =0 ; i < m ; i ++)
        pre[i + 1] = pre[i] + cost[i];


        ll ans = 2 * pre[m] ;
        for(int i = 1 ; i<=n ; i ++)
        {
            int x1 = dist[i][0];
            int x2 = dist[i][1];
            int x3 = dist[i][2];

            if(x1 + x2 + x3 <=m )
            {
                ll total = pre[x1 + x2 + x3];
                if(x2)
                {
                    total += pre[x2];
                }
                ans = min(total , ans);
            }
        }
        cout << ans << endl;
    }
}