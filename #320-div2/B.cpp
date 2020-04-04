#include<bits/stdc++.h>

using namespace std;
#define ll long long int
int main()
{
    ll t;
    t = 1;
    //cin >> t;
    while(t--)
    {   
        ll n;
        cin >> n;
        priority_queue < pair < int , pair < int ,int > >  > pq;
        ll ans[2*n + 1];
        memset(ans,0,sizeof(ans));
        for(int i = 2; i <= 2* n ; i ++)
        {
            for(int j = 1; j < i; j ++)
            {
                ll x;
                cin >> x;
                pq.push({x , { i ,  j}});
            }
        }
        while(!pq.empty())
        {
            pair < int , pair < int ,int > > p = pq.top();
            int x = p.second.first;
            int y = p.second.second;

            if(ans[x] == 0 && ans[y] == 0)
            {
                ans[x] = y;
                ans[y] = x;
            }
            pq.pop();
        }



        for(int i = 1; i <=2*n; i++)
        cout << ans[i] << " ";
    }
}