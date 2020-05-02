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
        ll suma = 0;
        ll sumb = 1 << n;
        int i = 1;
        int j = n;
        for(int i = 1; i < n /2 ; i ++)
        {
            sumb += 1 << i;
        }
        for(int i = n /2 ; i < n ; i ++)
        {
            suma += ( 1 << i);
           
        }

        //cout << suma << " " << sumb << endl;
        cout << abs(suma -sumb) << endl;
   }
}
