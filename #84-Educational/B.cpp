#include<bits/stdc++.h>

using namespace std;
#define ll long long int

int main(){
    
    ll t;
    t = 1;
    cin >> t;

    while(t--)
    {
        ll n;
        cin >> n;
        vector < int > adj[n + 1];
        ll done[n + 1];
        for(int i = 1; i <=n ; i ++)
        {
            done[i] = 0;
            ll x;
            cin >> x;
            for(int j = 0 ; j <  x ; j ++)
            {
                ll y;
                cin >> y;
                adj[i].push_back(y);
            }
            sort(adj[i].begin() , adj[i].end());
        }
        int node = -1;
        for(int i = 1 ; i <=n ;i ++)
        {
            int check = 0;
            for(auto x : adj[i])
            {
                if(!done[x])
                {
                    done[x] = 1;
                    check = 1;
                    break;
                }
            }
            if(!check)
            {
                node = i;
            }
        }
        if(node == -1)
        cout << "OPTIMAL" << endl;
        else
        {
            cout << "IMPROVE" << endl;
            for(int i = 1; i <=n ; i ++)
            {
                if(!done[i])
                {
                    cout << node << " " << i << endl;
                    break; 
                }
            }
        }

    }

}