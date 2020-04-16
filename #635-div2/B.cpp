#include<bits/stdc++.h>

using namespace std;
#define ll long long int

int main()
{
    ll t;
    t = 1;
    cin >> t;
    while(t--)
    {
       ll k , n , m;
       cin >> k >> n >> m;
       for(int i = 0;  i< n ; i++)
       {
           ll tx = k / 2  + 10;
           if(tx < k)
           {
               k = tx;
           }
           else
           {
               break;
           }
       }
       for(int j =0 ; j  < m ; j ++)
       {
           k -=10;
       }
       if( k <= 0)
       cout << "YES" << endl;
       else
       cout << "NO" << endl;
    }
}