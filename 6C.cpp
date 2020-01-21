#include<bits/stdc++.h>

using namespace std;
#define ll long long int
#define mod 1000000007

int main()
{
  ll n;
  cin >> n;
  ll a[n];
  for(int i = 0 ; i < n ; i++)
  cin >> a[i];
  int i = 0;
  int j = n - 1;
  ll sum1 = 0;
  ll sum2 = 0;
  while( i <= j)
  {
      if(sum1 <= sum2)
      {
          sum1 += a[i];
          i++;
      }
      else
      {
          sum2 += a[j];
          j--;
      }
      
  }
  cout << i << " " <<n - i << endl;
}
