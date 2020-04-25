#include<bits/stdc++.h>

using namespace std;
#define ll long long int

int main()
{
    ll t;
    cin >> t;
    while( t--)
    {
        ll n , a , b;
        cin >> n >> a >> b;
        if(a >= b || n <= a)
        cout << n << endl;
        else
        {
            ll temp = ((n + 1) / 2);
            ll temp1 = temp;
            temp /=a ;
            ll ans =  (n + 1) / 2 + (temp) * b ;
            if(temp1 % a == 0)
            ans -= b;
            if(ans < n)
            ans = n;
            
            cout << ans << endl;

        }
    }
}