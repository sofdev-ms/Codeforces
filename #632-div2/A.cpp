#include<bits/stdc++.h>

using namespace std;
#define ll long long int 

int main(){
    ll t;
    t = 1;
    cin >> t;
    while(t--)
    {
        ll n , m;
        cin >> n >> m;
        for(int i = 0; i  < n ; i ++)
        {

            for(int j =0 ; j  <m ; j ++)
            {cd
                if( i == 0 && j == 0)
                cout << "W" ;
                else
                cout << "B" ;
            }
            cout << endl;
        }
    }
}