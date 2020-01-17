#include<bits/stdc++.h>

using namespace std;
#define ll long long int


int main()
{
    ll n , k;
    cin >> n >> k;
    vector < ll > ans;
    ll count = 0;
    for(ll i = 1; i * i <=n; i ++)
    {
        if( n % i == 0)
        {
            count++;
            if( n / i != i)
            count ++;
            
        }
    }
    ll a = 1;
    ll b = count;
    if( k > count )
    cout << "-1" << endl;
    else
    {
        for(ll i = 1; i*i<=n; i ++)
        {
            if( n % i == 0)
            {
                if(k == a)
                {
                    cout << i << endl;
                    break;
                }
                else if( k== b)
                {
                    cout << n / i << endl;
                    break;
                }
                else
                {
                    a ++;
                    b --;
                }
            }
        }
    }
}
