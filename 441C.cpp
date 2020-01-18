#include<bits/stdc++.h>

using namespace std;
#define ll long long int
#define mod 1000000007



int main()
{
   ll n , m ,k1;
   cin >> n >> m >> k1;
   int i = 1;
   int j = 1;
   int a[n * m][2];
   int k = 0;
   while( i <= n && j <=m)
   {
       a[k][0] = i;
       a[k][1] = j;
       int in = 0;
       if( j == m && i % 2 == 1)
       {
           in = 1;
       }
       else if( j == 1 && i % 2 == 0)
       {
           in = 1;
       }
       
       if(j!=m && i%2 == 1)
       j++;
       else if( j!=1 && i %2 == 0)
       j--;
       i += in;
       k++;
   }
   k = 0;
   while(k1 > 1)
   {
       cout << "2 ";
       cout << a[k][0] << " " << a[k][1] << " ";
       cout << a[k + 1][0] << " " << a[k + 1][1] << " " << endl;;
       k +=2;
       k1--;
   }
   cout << n * m - k << " ";
   while( k < n * m )
   {
       cout << a[k][0] << " " << a[k][1] << " ";
       k++;
   }
   
  
 
  
}
