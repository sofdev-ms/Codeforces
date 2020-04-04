#include<bits/stdc++.h>

using namespace std;
#define ll long long int

int main(){
    ll t;
    t = 1;
    //cin >> t;
    while(t--)
    {
        ll n,m;
        cin >> n >> m;
        ll a[m];
        ll total  = 0;
        // map < int ,int > m;
        int flag = 1;
        for(int i =0 ; i < m ; i ++)
        {
            cin >> a[i] ;
            if( n - i - a[i] + 1 <= 0 )
            flag = 0;
            total += a[i];
        }
        
        if(total < n || flag == 0)
        {
            cout << "-1" << endl;
        }
        else
        {
            int j = 0;
            for(int i = 0; i  < m; i ++)
            {

                while(total < n - j)
                {
                    j++;
                }
                cout << j + 1 << " ";
                j++;
                total -= a[i];
            }
        }
    }
}