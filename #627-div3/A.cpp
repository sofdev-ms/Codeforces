#include<bits/stdc++.h>

using namespace std;
#define ll long long int

int main(){

    ll t;
    t = 1;
    cin >> t;
    
    while(t--)
    {
        ll n;
        cin >> n;
        ll a[n];
        int flag=  1;
        for(int i= 0; i < n ; i ++)
        {
            cin >> a[i];
            if(i > 0 && (a[i] - a[i - 1]) % 2 != 0)
            flag=  0;
        }
        if(flag)
        cout << "YES" << endl;
        else
        cout << "NO" << endl;
    }

}