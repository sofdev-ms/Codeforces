#include<bits/stdc++.h>

using namespace std;
#define ll long long int

int main()
{
   ll t;
   t = 1;	
   //cin >> t;
   while(t--){
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
     ll value[n + 1];
     ll target[n + 1];
     priority_queue< pair <int ,int > , vector < pair < int,int > > , greater < pair < int,int > > > pq;
     for(int i = 1; i <=n; i++)
     {
         cin >> value[i];
         visited[i] = false;
         target[i] = 0;
         if(value[i] == 1)
         {
             pq.push({1 ,i});
             visited[i] = true;
         }
     }
     vector < int > ans;
     while(!pq.empty())
     {
         pair < int ,int > p = pq.top();
         pq.pop();
         ans.push_back(p.second);
         int temp = p.first;
         int flag = 1;
         for(auto x : adj[p.second])
         {
             if(value[x] == temp)
            {
                //cout << "ASda" << endl;
                flag =0;
                break;
            }
             if(!visited[x])
             {
                if(value[x] - 1 == temp)
                {
                    if(target[x] >= temp - 1)
                    {
                        visited[x] = true;
                        pq.push({value[x] , x});
                    }
                    else
                    {
                        //cout << "AE" << endl;
                        flag =0;
                        break;
                    }
                }
                else
                {
                    if(target[x] < temp - 1)
                    {
                       // cout << "AD" << endl;
                        flag = 0;
                        break;
                    }
                    target[x] = temp;
                }
             }
         }
         if(!flag)
         break;

     }
     
     if(ans.size() != n)
     cout << -1 << endl;
     else
     {
         for(auto x : ans)
         cout << x << " ";
     }


   }
}
