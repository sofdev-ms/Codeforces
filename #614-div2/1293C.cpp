#include<bits/stdc++.h>
 
using namespace std;
#define ll long long int
#define mod 1000000007
 
int main()
{
   ll n, q;
   cin >> n >> q;
   bool a[2][n];
   memset(a , 0 ,sizeof(a));
   int count = 0 ;
   while(q -- )
   {
       ll x , y;
       cin >> x >> y;
       x--;
       y--;
       if(a[x][y])
       {
           a[x][y] = 0;
           if(x - 1 >=0 && a[x-1][y])
           count --;
           if(x + 1 < 2 && a[x + 1][y])
           count --;
           if(x - 1>=0 && y - 1>=0 && a[x - 1][y - 1])
           count --;
           if(x - 1 >=0 && y + 1 < n && a[x - 1][y + 1])
           count --;
           if(x + 1 < 2 && y - 1>=0 && a[x + 1][y - 1])
           count --;
           if(x + 1 < 2 && y + 1 < n && a[x + 1][y + 1])
           count --;
       }
       else
       {
           a[x][y] = 1;
           if(x - 1 >=0 && a[x-1][y])
           count ++;
           if(x + 1 < 2 && a[x + 1][y])
           count ++;
           if(x - 1>=0 && y - 1>=0 && a[x - 1][y - 1])
           count ++;
           if(x -1 >=0 && y + 1 < n && a[x - 1][y + 1])
           count ++;
           if(x + 1 < 2 && y - 1>=0 && a[x + 1][y - 1])
           count ++;
           if(x + 1 < 2 && y + 1 < n && a[x + 1][y + 1])
           count ++;
       }
      ;
       if(count == 0)
       cout << "Yes" <<endl;
       else
       cout << "No" << endl;
   }
}
