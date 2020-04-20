#include<bits/stdc++.h>

using namespace std;
#define ll long long int

void dfs(vector<int > adj[],bool visited[],int i,vector<int > &v)
{
         visited[i]=true;
            v.push_back(i);
            for(auto v1: adj[i])
            {
                if(!visited[v1])
                {
                    dfs(adj,visited,v1,v);
                }
            }
}

int main()
{
    int n,m;
    cin>>n>>m;
    vector<int > adj[n+1];
    int a[n+1]={0};
    //vector<int > v;

    for(int i=0;i<m;i++)
    {
        int x,y;
        cin>>x>>y;

        adj[x].push_back(y);
        adj[y].push_back(x);

    }
    bool visited[n+1]={0};
    int flag=1;
    for(int i=1;i<=n;i++)
    {
        if(!visited[i])
        {
            vector<int > v;
            visited[i]=true;
            v.push_back(i);
            for(auto v1: adj[i])
            {
                if(!visited[v1])
                {
                    dfs(adj,visited,v1,v);
                }
            }
            int size=v.size();
            if(size>2)
            {
                for(int i=0;i<size;i++)
                {
                    if(adj[v[i]].size()!=size-1)
                        flag=0;
                }
                if(!flag)
                    break;
            }
        }
    }
    if(flag)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}