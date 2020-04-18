#include<bits/stdc++.h>

using namespace std;
#define ll long long int

void dfs(int i , vector < int > adj[] , int color[] , int present , bool &check , bool visited[])
{
    color[i] = present;
    visited[i] = true;
    for(auto v : adj[i])
    {
        if(!visited[v])
        {
            dfs(v, adj ,color , !color[i] , check , visited);
        }
        else if(color[i] == color[v])
        {
            check = false;
        }
    }
}

int main()
{
    ll n;
    cin >> n;
    string s;
    cin >> s;
    string s1 = s;
    sort(s1.begin() , s1.end());
    ll done[n] , done1[n];
    for(int i =0 ; i < n ; i++)
    {
        done[i] = -1;
        done1[i] = 0;
    }
    vector < int > adj[n];
    for(int i =0 ; i < n ; i ++)
    {
        for(int j = 0 ; j < n ; j  ++)
        {
            if(s[i] == s1[j] && !done1[j])
            {
                done[i] = j;
                done1[j] = true;
                break;
            }
        }
    }
    // for(auto x : done)
    // cout << x << " ";
    // cout << endl;
    for(int i =0 ; i < n ; i ++)
    {
        for(int j = 0; j < n ; j ++)
        {
            if(j < i && done[j] > done[i])
            {
                adj[i].push_back(j);
                adj[j].push_back(i);
            }
            else if( j > i && done[j] < done[i])
            {
                adj[i].push_back(j);
                adj[j].push_back(i);
            }
        }
    }
    bool visited[n];
    memset(visited,  0 , sizeof(visited));
    int color[n];
    bool check = true;
    for(int i =0 ; i < n ; i ++)
    {
        if(!visited[i])
        {
            color[i] = 0;
            visited[i] = true;
            for(auto v : adj[i])
            {
                if(!visited[v])
                {
                    dfs(v, adj ,color , !color[i] , check , visited);
                }
                else if(color[i] == color[v])
                {
                    check = false;
                }
            }
        }
    }
    if(check)
    {
        cout << "YES" << endl;
        for(auto x : color)
        cout << x ;
    }
    else
    cout << "NO" << endl;

}