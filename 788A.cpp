#include<bits/stdc++.h>

using namespace std;
#define ll long long int
#define mod 1000000007

int main()
{
  ll n;
  cin >> n;
  ll a[n];
  vector < ll > v;
  for(int i = 0 ; i < n ; i++)
  {
      cin >> a[i];
      if(i!=0)
      {
          v.push_back(abs(a[i] - a[i - 1]));     
      }
  }
  for(int i = 0 ; i < n - 1; i++)
  {
      if(i % 2!=0)
      v[i] = -1*v[i];
  }
  ll ans = 0;
  ll mx = 0;
  ll curr = 0;
  for(int i = 0 ; i < n - 1; i ++)
  {
      curr = max(curr + v[i] , v[i]);
      mx = max(curr , mx);
  }
  ans = max(ans , mx);
  
  for(int i = 0 ; i < n - 1; i++)
  {
      v[i] = -1*v[i];
  }
  mx = 0;
  curr = 0;
  for(int i = 0 ; i < n - 1; i ++)
  {
      curr = max(curr + v[i] , v[i]);
      mx = max(curr , mx);
  }
  ans = max(ans , mx);
  cout << ans << endl;
}
