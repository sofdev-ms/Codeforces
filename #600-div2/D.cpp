#include<bits/stdc++.h>

using namespace std;
#define ll long long int

void dfs(vector < int > adj [] , ll i , bool visited[] , ll &mn , ll &mx )
{
    mn = min(mn , i);
    mx = max(mx , i);
    //temp.push_back(i);
    visited[i] = true;
    for(auto x : adj[i])
    {
        if(!visited[x])
        {
            dfs(adj , x , visited , mn , mx);
        }
    }
}

int main()
{
    ll t;
    t = 1;
    //cin >> t;
    while(t--)
    {
        ll n , m;
        cin >> n >> m;
        vector < int > adj[n + 1];
        for(int i =0 ; i < m ; i ++)
        {
            ll x , y;
            cin >> x >> y;
            adj[x].push_back(y);
            adj[y].push_back(x);
        }
        bool visited[n + 1];
        memset(visited , 0 , sizeof(visited));
        vector < pair < ll , ll > > v;
        for(ll i = 1 ; i <=n ; i ++)
        {   
            if(!visited[i])
            {
                ll mn = i;
                ll mx = i;
                // temp.push_back(i);
                visited[i] = true;
                mn = min(mn , i);
                mx = max(mx , i);
                for(auto x : adj[i])
                {
                    if(!visited[x])
                    {
                        dfs(adj , x , visited , mn , mx);
                    }
                }
                v.push_back({mn , mx});

            }

        }

        sort(v.begin() , v.end());
        ll ans = 0;
        ll mn = -1;
        ll mx = -1;
        for(int i = 0; i < v.size() ; i ++)
        {
            if(mn == -1 && mx == -1)
            {
                mn = v[i].first;
                mx = v[i].second;
            }
            else
            {
                if(v[i].first > mx)
                {
                    mn = v[i].first;
                    mx = v[i].second;
                }
                else
                {
                    ans ++;
                    mx = max(mx , v[i].second);
                }
            }
        }
        cout << ans << endl;
    }
}