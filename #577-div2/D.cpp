#include<bits/stdc++.h>

using namespace std;
#define ll long long int
ll left1 =0;
ll right1 = 1;
ll col1[200001][2];
ll cost(ll x , ll y)
{
    ll left = INT_MAX;
    ll right = INT_MAX;
    
    if(col1[x][0] != -1)
    {
        left = abs(x - col1[x][0]) + abs( y - col1[x][0]);
    }

    if(col1[x][1] != INT_MAX)
    {
        right = abs(x - col1[x][1]) + abs( y - col1[x][1]);
    }



    return min(left , right);

}

int main()
{
    ll n , m , k , q;
    cin >> n >> m >> k >> q;
    ll x[n + 1][2];
    memset(x , 0 , sizeof(x));
    x[1][0] = 1;
    x[1][1] = 1;
    ll mxh = 1;
    vector < ll > row;
    row.push_back(1);
    for(int i = 0; i < k ;i ++)
    {
        ll a , b;
        cin >> a >> b;
        mxh = max(a , mxh);
        if(x[a][0] == 0)
        {
            row.push_back(a);
            x[a][0] = b;
            x[a][1] = b;
        }
        else
        {
            x[a][0] = min(x[a][0] , b);
            x[a][1] = max(x[a][1] , b);
        }
    }
    sort(row.begin() , row.end());
    ll col[m + 1];
    memset(col  ,0  ,sizeof(col));
    for(ll i = 0; i < q ; i ++)
    {
        ll temp;
        cin >> temp;
        col[temp] = 1;
    }
    ll prev = -1;
    for(ll i = 1; i <=m; i ++)
    {
        if(col[i])
        prev = max(prev , i);

        col1[i][0] = prev;
    }
    prev = INT_MAX;
    for(ll i = m; i >=1; i --)
    {
        if(col[i])
        prev = min(prev , i);

        col1[i][1] = prev;
    }
    ll dp[mxh + 1][2];
    dp[mxh][left1] = x[mxh][1] - x[mxh][0];
    dp[mxh][right1] = x[mxh][1] - x[mxh][0];
    //cout << dp[mxh][left1] << " " << dp[mxh][right1] << endl;
    ll size = row.size();
    // cout << size << endl;
    for(ll temp = size - 2 ; temp >= 0 ; temp --)
    {
        ll i = row[temp];
        ll j = row[temp + 1];
        dp[i][right1] = x[i][1] - x[i][0] + min(cost(x[i][0] , x[j][0]) + dp[j][left1] , cost (x[i][0]  , x[j][1]) + dp[j][right1]);
        dp[i][left1] = x[i][1] - x[i][0] + min(cost(x[i][1] , x[j][0]) + dp[j][left1] , cost (x[i][1]  , x[j][1]) + dp[j][right1]);
        //cout << dp[i][left1] << " " << dp[i][right1] << endl;
    }
    cout << dp[1][left1] + mxh - 1 << endl;
}