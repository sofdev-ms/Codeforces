#include<bits/stdc++.h>

using namespace std;
#define ll long long int
#define mod 1000000007

bool check( ll x  , ll sum)
{
    ll total = 0;
    while(x!=0)
    {
        total += (x % 10);
        x /=10;
    }
    return (total == sum);
}

int main()
{
  vector < ll > ans;
  ll a, b , c;
  cin >> a >> b >> c;
  for(ll i =1 ; i <= 81 ; i ++)
  {
      ll p = pow(i , a);
      p *=b;
      p += c;
      if( p > 0 && p < 1000000000 && check(p , i))
      ans.push_back(p);
  }
  sort(ans.begin() , ans.end());
  cout << ans.size() << endl;
  for(auto x : ans)
  cout << x << " ";
  
}
