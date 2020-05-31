#include<bits/stdc++.h>

using namespace std;
#define ll long long int

int main()
{
   ll t;
   t = 1;	
   cin >> t;
   while(t--){
        ll n,x;
        cin >> n >> x;
        ll a[n];
        ll odd =0;
        ll even = 0;
        for(int i =0 ; i < n ; i ++)
        {
            cin >> a[i];
            if(a[i] % 2 == 0)
            even ++;
            else
            odd++;
        } 
        int flag = 1;
        if( n == x && (odd % 2 == 0))
        flag =0;
        else if(odd == 0)
        flag = 0;
        else if(even == 0 && x % 2 == 0)
        flag = 0;
        
        if(flag)
        cout << "YES" <<endl;
        else
        cout << "NO" << endl;



   }
}
