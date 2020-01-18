#include<bits/stdc++.h>

using namespace std;
#define ll long long int
#define mod 1000000007

int main()
{
  ll n;
  cin >> n;
  vector < ll > a;
  vector < ll > b;
  ll totala = 0;
  ll totalb = 0;
  ll last;
  while( n-- )
  {
      ll x;
      cin >> x;
      if(x < 0)
      {
          totalb+=abs(x);
          b.push_back(-1 * x);
      }
      else
      {
          totala+=abs(x);
          a.push_back(x);
      }
      if( n == 0)
      {
          last = x;
      }
  }
  if(totala > totalb)
  cout << "first" << endl;
  else if(totala < totalb)
  cout << "second" << endl;
  else
  {
      int i = 0;
      int j = 0;
      int l = a.size();
      int m = b.size();
      int f = 0;
      while( i < l && j < m)
      {
          if(b[j] > a[i])
          {
              f = 1;
              break;
          }
          else if(b[j] < a[i])
          break;
          i++;
          j++;
      }
      if(i == l && j == m)
      {
          if(last < 0)
          cout << "second" <<endl;
          else
          cout << "first" << endl;
      }
      else if(f)
      cout << "second" << endl;
      else
      {
          if(i == l)
          {
              cout << "second" << endl;
          }
          else
          cout << "first" << endl;
      }
          
      
  }
}
