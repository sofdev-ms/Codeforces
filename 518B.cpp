#include<bits/stdc++.h>

using namespace std;
#define ll long long int
#define mod 1000000007

int main()
{
  string s , s1;
  cin >> s >> s1;
  map < char , int > ms1;
  int l = s.length();
  int m = s1.length();
  for(int i = 0 ; i < m ; i++)
  {
      ms1[s1[i]]++;
  }
  ll ans1 = 0;
  ll ans2 = 0;
  string rem = "";
  for(int i = 0 ; i < l ; i++)
  {
      if(ms1[s[i]] != 0)
      {
          ans1++;
          ms1[s[i]]--;
      }
      else
      {
          rem += s[i];
      }
  }
  for(int i = 0; i < rem.length(); i ++)
  {
      if(islower(rem[i]))
      {
          if(ms1[toupper(rem[i])] != 0)
          {
              ans2 ++;
              ms1[toupper(rem[i])]--;
          }
      }
      else
      {
          if(ms1[tolower(rem[i])] != 0)
          {
              ans2 ++;
              ms1[tolower(rem[i])]--;
          }
      }
  }
  cout << ans1 << " " << ans2 << endl;
}
