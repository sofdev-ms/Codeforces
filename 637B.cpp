#include<bits/stdc++.h>

using namespace std;
#define ll long long int
#define mod 1000000007

int main()
{
  ll n;
  cin >>n;
  stack < string > s;
  map < string , bool > s1;
  for(int i = 0 ; i < n ; i++)
  {
      string a;
      cin >> a;
      s.push(a);
  }
  while(!s.empty())
  {
      if(!s1[s.top()])
      {
          cout << s.top() <<endl;
          s1[s.top()] = true;
          s.pop();
          
      }
      else
      s.pop();
  }
}
