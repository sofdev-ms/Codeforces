#include<bits/stdc++.h>

using namespace std;
#define ll long long int

int main()
{
   ll t;
   t = 1;	
   //cin t;
   while(t--){
        ll n;
        cin >> n;
        cout << 4 + n * 3 << endl;
        int x = 0;
        int y = 0;
        n++;
        cout << x << " " << y << endl;
        
        while(n)
        {
            cout << x + 1 << " " << y << endl;
            cout << x + 1 << " " << y + 1 << endl;
            cout << x << " " << y + 1 << endl;
            x ++;
            y++;
            n--;
        }     
   }
}
