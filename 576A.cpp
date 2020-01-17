#include<bits/stdc++.h>

using namespace std;
#define ll long long int

bool check(ll n)
{
    ll count = 0;
    
    while(n % 2 == 0)
    {
        n /= 2;
        count = 1;    
    }
    
    for(ll i = 3 ; i <= n ; i +=2)
    {
        if( n % i == 0)
        {
            if(count == 1)
            return false;
            count ++;
            while( n % i == 0)
            {
                n /= i;
            }
        }
    }
    return true;
}

int main()
{
    ll n;
    cin >> n;
    vector < ll > ans;
    for(ll i = 2; i<=n; i ++)
    {
        if(check(i))
        ans.push_back(i);
    }
    cout << ans.size() << endl;
    for(auto x : ans)
    cout << x << " ";
    
}
