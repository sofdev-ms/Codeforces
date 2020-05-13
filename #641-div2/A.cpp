#include<bits/stdc++.h>

using namespace std;
#define ll long long int

int main()
{
   ll t;
   t = 1;	
   cin >> t;
   while(t--){
             ll n , k;
             cin >> n >> k;
             int prime = -1;
             for(int i = 2 ; i * i <= n ; i ++)
             {
                 if(n % i == 0)
                 {
                     prime = i;
                     break;
                 }
             }
             if(prime == -1)
             {
                 cout << 2 * n + 2 * ( k - 1) << endl;
             }
             else
             {
                 cout << n + prime + 2 * ( k - 1) << endl;
             }
   }
}