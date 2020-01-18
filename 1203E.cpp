#include<bits/stdc++.h>

using namespace std;
#define ll long long int
#define mod 1000000007

int main()
{
  ll n;
  cin >> n;
  ll a[n];
  for(int i = 0 ;i < n ; i++)
  cin >> a[i];
  sort(a , a+ n);
  int count = 0;
  for(int  i = 0 ; i < n ; i++)
  {
      if( i == 0 && a[i] != 1)
      {
          a[i]--;
      }
      else if( i != 0)
      {
          if(a[i] == a[i - 1])
          {
              a[i] ++;
          }
          else if(a[i] > a[i  - 1] + 1)
          {
              a[i] --;
          }
          else if(a[i] < a[i - 1])
          a[i] = a[i - 1];
      }
  }
  ll c[150002] = {0};
  for(int i = 0; i < n ; i++)
  {
      if(c[a[i]] == 0)
      {
          count ++;
          c[a[i]] = 1;
      }
  }
  cout << count << endl;
}
