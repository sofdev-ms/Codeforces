#include<bits/stdc++.h>

using namespace std;
#define ll long long int
ll dp[201][201][201];
ll find(ll a1[] , ll b1[] , ll c1[], int a , int b , int c)
{
    if(( a == 0 && b == 0) || (a == 0 && c == 0) || (b ==0 && c == 0))
    {
        dp[a][b][c] = 0;
        return 0;
    }
    if(dp[a][b][c] != -1)
    return dp[a][b][c];

    ll temp = 0;
    if(a > 0 && b > 0)
    temp = a1[a - 1] * b1[b - 1] + find(a1 ,b1 ,c1 , a - 1, b - 1, c);
    if(a > 0 && c > 0)
    temp = max(temp , a1[a - 1] * c1[c - 1] + find(a1 ,b1 ,c1 , a - 1, b , c - 1));
    if(c > 0 && b > 0)
    temp = max(temp , c1[c - 1] * b1[b - 1] + find(a1 ,b1 ,c1 , a , b - 1, c - 1));

    dp[a][b][c] = temp;
    return temp;


}

int main()
{
    ll a , b  , c;
    cin >> a >> b >> c;
    ll a1[a];
    ll b1[b];
    ll c1[c];
    for(int i =0 ; i < a ; i ++)
    cin >> a1[i];
    for(int i =0 ; i < b ; i ++)
    cin >> b1[i];
    for(int i =0 ; i < c ; i ++)
    cin >> c1[i];
    sort(a1 , a1 + a);
    sort(b1 , b1 + b);
    sort(c1 , c1 + c);
    memset(dp , -1 , sizeof(dp));
    cout << find(a1 , b1 , c1 , a , b , c) << endl;

}
