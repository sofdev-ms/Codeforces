#include<bits/stdc++.h>

using namespace std;
#define ll long long int

int main()
{
   ll t;
   t = 1;	
   cin >> t;
   while(t--){
            ll x;
            cin >> x;
            if(x % 4 != 0)
            cout << "NO" << endl;
            else
            cout << "YES" << endl;
   }
}
