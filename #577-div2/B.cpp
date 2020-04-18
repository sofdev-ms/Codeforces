#include<bits/stdc++.h>

using namespace std;
#define ll long long int

int main(){
    ll t;
    t = 1;
    //cin >> t;
    while(t--){
        ll n;
        cin >> n;
        ll a[n];
        ll sum = 0;
        ll mx = 0;
        for(int i = 0; i < n ; i ++)
        {
            cin >> a[i];
            sum += a[i];
            mx = max(a[i] , mx);
        }
        if(sum %  2 == 0 && mx <= sum / 2)
        cout << "YES" << endl;
        else
        cout << "NO" << endl;
    }
}