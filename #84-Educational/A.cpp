#include<bits/stdc++.h>

using namespace std;
#define ll long long int

int main(){
    
    ll t;
    t = 1;
    cin >> t;

    while(t--)
    {
        ll n,x;
        cin >> n >> x;
        if(x % 2 != n % 2)
        cout << "NO" << endl;
        else if(n < x * x)
        cout << "NO" <<endl;
        else
        cout << "YES" << endl;
    }

}