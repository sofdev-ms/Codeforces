#include<bits/stdc++.h>

using namespace std;
#define ll long long int

int main(){
    
    ll t;
    t = 1;
    //cin >> t;

    while(t--)
    {
        ll n,m,k;
        cin >> n >> m >> k;
        for(int i = 0 ; i< 2 * k ; i ++)
        {
            ll x , y;
            cin >> x >> y;
        }
        cout << n + m - 2 + n * m  << endl;
        for(int i = 0 ; i < n - 1 ;  i ++)
        cout << "U";
        for(int i = 0 ; i < m - 1; i ++)
        cout << "L";

        while( m!= 0)
        {
            for(int i = 0 ; i < n - 1; i ++)
            cout << "D";

            cout << "R";
            m -- ;

            if(m ==0 )
            break;

            for(int i = 0 ; i < n - 1; i ++)
            cout << "U";

            cout << "R";
            m--;
        }

    }

}