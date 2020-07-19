#include<bits/stdc++.h>

using namespace std;
#define ll long long int

int main()
{
   ll t;
   t = 1;	
   cin >> t;
   while(t--){
       ll l , r , m;
       cin >> l >> r >> m;
       ll l1 = l - r;
       ll l2 = r - l;
       ll a =-1, b =-1 ,c =-1;
       for(int i = l ; i <=r ; i ++)
       {
           ll rem = m % i;
           ll rem1 = rem - i;
           if(rem >= l1 && rem <= l2 && m / i != 0)
           {
               a = i;
               c = l;
               b = l + rem;
               break;
           }
           if(rem1 >= l1 && rem1 <= l2)
           {
               a = i;
               c = r;
               b = r + rem1;
               break;
           }
       }      
       cout << a << " " << b << " " << c << endl;
   }
}
