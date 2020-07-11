#include <bits/stdc++.h>

using namespace std;
#define ll long long int

int main()
{
    ll t;
    t = 1;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        if (n % 2 == 0)
        {
            cout << n / 2 << " " << n / 2 << endl;
        }
        else
        {
            ll ans = n - 1;
            ll a = 1 ;
            ll b = n - 1;
            for(int i =3; i * i <=n ; i +=2)
            {
                if( n % i == 0)
                {
                    ll x = i ;
                    ll y = n / i;
                    if(x % 2 != 0 && y % 2 != 0)
                    {
                        ll t1 = max(x , y);
                        ll t2 = (min(x , y) - 1) * t1;
                        if(t2 < ans)
                        {
                            ans = t2;
                            a = t1;
                            b = t2;
                        } 
                    }

                }
            }
            cout << a << " " << b << endl;
        }
    }
}
