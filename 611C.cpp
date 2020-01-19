#include<bits/stdc++.h>

using namespace std;
#define ll long long int
#define mod 1000000007



int main()
{
   ll n ,m;
   cin >> n >> m;
   char a[n][m];
   int dp[n][m];
   int dp1[n][m];
   for(int i = 0 ; i < n ; i ++)
   {
       int t1 = 0;
       for(int j = 0 ; j < m ; j++)
       {
           cin >> a[i][j];
           if( j == 0)
           dp[i][j] =0 ;
           else if(a[i][j] == '.' && a[i][j - 1] == '.')
           t1 ++;
           
           dp[i][j] = t1;
           if(i!=0)
           dp[i][j] += dp[i - 1][j];
           
           
           
       }
   }
   for(int j = 0;  j < m ; j ++)
   {
       ll t1 = 0;
       for(int i = 0 ; i < n ; i ++)
       {
           if( i == 0)
           dp1[i][j] = 0;
           else if(a[i][j] == '.' && a[i - 1][j] == '.')
           t1++;
           
           dp1[i][j] = t1;
           if(j!=0)
           dp1[i][j] += dp1[i][j - 1];
       }
       
   }
  
   ll q;
   cin >> q;
   while(q--)
   {
       ll x ,y , x1 , y1;
       cin >> x >> y >> x1 >> y1;
       x--;
       y--;
       x1--;
       y1--;
       ll ans = 0;
       ans = dp[x1][y1] - dp[x1][y];
       if(x!=0)
       ans = ans - dp[x - 1][y1] + dp[x - 1][y]; 
       ans = ans + dp1[x1][y1] - dp1[x][y1];
       if(y!=0)
       ans = ans - dp1[x1][y - 1] + dp1[x][y - 1];
       
       cout << ans << endl; 
   }
   
 
  
}
