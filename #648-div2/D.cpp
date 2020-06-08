#include<bits/stdc++.h>

using namespace std;
#define ll long long int

int main()
{
   ll t;
   t = 1;	
   cin >> t;
   while(t--){
     ll n , m ;
     cin >> n >> m;
     int check = 1;
     char a[n][m];
     int count = 0;
     for(int i = 0 ;i < n ; i ++)
     {
         for(int j =0 ;  j < m ; j ++)
         {
             cin >> a[i][j];
             if(a[i][j] == 'G')
             {
                 count ++;
             }
         }
     }  
     int dx[4] = {1 , -1 , 0 , 0};
     int dy[4] = {0 , 0 , 1 , -1};
     for(int i = 0 ;i < n ; i ++)
     {
         for(int j =0 ;  j < m ; j ++)
         {
             if(a[i][j] == 'B')
             {
                 for(int k =0 ; k < 4 ; k ++)
                 {
                     int x1 = i + dx[k];
                     int y1 = j + dy[k];
                     if(x1 >=0 && x1 < n && y1 >=0 && y1 < m)
                     {
                         if(a[x1][y1] == 'G')
                         {
                             check = 0;
                             break;
                         }
                         else if(a[x1][y1] != 'B')
                         a[x1][y1] = '#';
                     }
                 }
                 if(!check)
                 break;
             }
         }
         if(!check)
         break;
     }
     if(!check)
     cout << "No" << endl;
     else
     {
         if(count == 0)
         cout << "Yes" << endl;
         else if(a[n - 1][m - 1] == '#')
         {
             cout << "No" <<endl;
         }
         else
         {
             int sx = n - 1;
             int sy = m - 1;
             bool visited[n][m];
             memset(visited , 0 ,sizeof(visited));
             stack < pair < int , int > > s;
             s.push({ n- 1, m- 1});
             while(!s.empty() && count!=0)
             {
                 pair < int , int > p = s.top();
                 s.pop();
                 int x = p.first;
                 int y = p.second;
                 for(int i = 0; i < 4 ; i ++)
                 {
                     int x1 = x + dx[i];
                     int y1 = y + dy[i];
                     if(x1 >=0 && x1 < n && y1 >=0 && y1 < m && !visited[x1][y1] && a[x1][y1] != 'B' && a[x1][y1] != '#')
                     {
                         visited[x1][y1] = true;
                         if(a[x1][y1] == 'G')
                         count --;
                         s.push({x1 , y1});
                     }
                 }
             }
             if(count == 0)
             cout << "Yes" << endl;
             else
             cout << "No" << endl;
         }
     }
   }
}
