#include<bits/stdc++.h>

using namespace std;
#define ll long long int

bool check(ll mid , ll a[] , ll b[] , ll k , ll n)
{
    for(int i =0 ;  i < n ; i ++)
    {
        ll req = a[i] * mid;
        ll need = max( (ll) 0 , req - b[i]);
        if( k >= need)
        {
            k-=need;
        }
        else
        return false;
    }
    return true;
}

int main(){
    ll n , k;
    cin >> n >> k ;
    ll a[n];
    ll b[n];
    ll l = INT_MAX;
    ll r = 0;
    for(int i =0 ; i < n ;  i++)
    {
        cin >> a[i];
    }
    for(int i =0 ; i < n ;  i++)
    {
        cin >>b[i];
        ll temp = (b[i] + k) / a[i];
        r = max(temp , r);
        temp = b[i] / a[i];
        l = min(l , temp);
    }
    ll ans = l;
    while(l <= r)
    {
        ll mid = l + ( r - l ) / 2;
        if(check(mid , a , b , k , n))
        {
            ans = mid;
            l = mid + 1;
        }
        else
        r = mid - 1;
    }
    cout << ans << endl;
}