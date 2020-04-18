#include<bits/stdc++.h>

using namespace std;
#define ll long long int

int main(){
    ll t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        ll a[n];
        ll even = 0;
        ll odd = 0;
        for(int i =0 ; i < n ; i ++)
        {
            cin >> a[i];
            if(a[i] % 2 == 0)
            {
                even++;
            }
            else
            odd++;
        }
        if(odd == 0)
        cout << "NO" << endl;
        else if(odd != 0 && even !=0)
        cout << "YES" << endl;
        else if(even == 0 && n % 2 !=0)
        {
            cout << "YES" << endl;
        }
        else
        cout << "NO" << endl;
    }
}