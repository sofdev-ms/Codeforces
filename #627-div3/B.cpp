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
        ll count[5001] = {0};
        int flag = 0;
        for(int i =0 ; i < n ; i++)
        {
            cin >> a[i];
            if(count[a[i]] == 0)
            count[a[i]] = i + 1;
            else
            {
                if( (i + 1 - count[a[i]]) > 1)
                flag = 1;
            }
        }
        if(flag)
        cout << "YES" << endl;
        else
        cout << "NO" << endl;
    }

}