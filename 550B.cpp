#include<bits/stdc++.h>

using namespace std;
#define ll long long int
ll ans = 0;
ll n , l , r , x;
void solve(ll a[] , int i , ll total , ll mn, ll mx , ll count)
{
    if(total >= l && total <= r && mx - mn >= x && count >= 2)
    {
        //cout << total << "  " << mn << " " << mx <<endl;
        ans ++;
    }
    
    for(int j = i ; j < n ; j ++)
    {
        total += a[j];
        solve(a , j + 1, total ,min(mn , a[j]) , max(mx , a[j]) , count + 1);
        total -= a[j];
    }
}

int main()
{
    
    cin >> n >> l >> r >> x;
    ll a[n];
    for(int i = 0 ; i < n ; i ++)
    cin >> a[i];
    sort(a , a + n);
    solve(a , 0 , 0, INT_MAX, INT_MIN , 0);
    cout << ans << endl;
}
