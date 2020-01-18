#include<bits/stdc++.h>

using namespace std;
#define ll long long int
#define mod 1000000007



int main()
{
  ll n , m ,k;
  cin >> n >> m >> k;
  ll a[n];
  for(int i = 0 ; i < n ; i ++)
  cin >> a[i];
  ll a1[m][3];
  for(int i = 0 ; i < m ; i ++)
  {
      cin >> a1[i][0] >> a1[i][1] >> a1[i][2];
  }
  ll ca1[m + 2] = {0};
  for(int i = 0 ; i < k ; i++)
  {
      ll x, y;
      cin >> x >> y;
      ca1[x]++;
      ca1[y + 1]--;
  }
  ll total = 0;
  for(int i = 1 ; i <= m ; i ++)
  {
      total += ca1[i];
      ca1[i] = total;
      
  }
  ll ca2[n + 2] = {0};
  for(int i = 0 ; i < m ; i ++)
  {
      a1[i][2] = a1[i][2] * ca1[i + 1];
      ca2[a1[i][0]]+= a1[i][2];
      ca2[a1[i][1] + 1]-= a1[i][2];
  }
  total = 0;
  for(int i = 0 ; i < n ; i ++)
  {
      total += ca2[i + 1];
      a[i] += total;
  }
  for(auto x : a)
  cout << x <<  " ";
  
  
 
  
}
