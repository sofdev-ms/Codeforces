#include<bits/stdc++.h>

using namespace std;
#define ll long long int

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    ll t;
    t = 1;

    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        int flag = 1;
        ll x , y;
        for(int i =0 ; i  < n ; i ++)
        {
            ll x1 , y1;
            cin >> x1 >> y1;
            if( i == 0)
            {
                x = x1;
                y = y1;
                if(y1 > x1)
                flag = 0;
            }
            else
            {
                int d1 = x1 - x;
                int d2 = y1 - y;
                if(d2 > d1 || d1 < 0 || d2 < 0)
                flag = 0;


                x = x1;
                y = y1;
            }
        }
        if(flag)
        cout << "YES"<<endl;
        else
        cout << "NO" << endl;
    }
}