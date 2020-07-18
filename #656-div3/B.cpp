#include<bits/stdc++.h>

using namespace std;
#define ll long long int

int main()
{
   ll t;
   t = 1;	
   cin >> t;
   while(t--){
       ll n;
       cin >> n;
       bool visited[n + 1] = {0};
       for(int i =0 ; i < 2 * n ; i ++)
       {
           int x;
           cin >> x;
           if(!visited[x])
           {
               cout << x << " ";
               visited[x] = true;
           }
       }      
       cout << endl;
   }
}
