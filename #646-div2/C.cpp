#include<bits/stdc++.h>

using namespace std;
#define ll long long int

int main()
{
   ll t;
   t = 1;	
   cin >> t;
   while(t--){
            ll n , x;
            cin >> n >> x;
            int degree = 0;
            for(int i = 0 ; i < n - 1; i ++)
            {
                ll a , b;
                cin >> a >> b;
                if(a == x || b == x)
                degree ++;
            }

            if( (n - 2) % 2 == 0 || degree <= 1 )
            cout << "Ayush" << endl;
            else
            cout << "Ashish" << endl;
   }
}
