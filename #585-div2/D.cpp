#include<bits/stdc++.h>

using namespace std;
#define ll long long int

int main()
{
    ll t;
    t = 1;
    //cin >> t;
    while(t--)
    {
      ll n;
      cin >> n ;
      string s;
      cin >> s;
      int left = 0;
      int right = 0;
      int sumleft = 0;
      int sumright = 0;
      for(int i = 0 ; i < n ; i ++ )
      {
          if( i < n / 2)
          {
              if(s[i] == '?')
              left++;
              else
              sumleft += (int)(s[i] - '0');
          }
          else
          {
              if(s[i] == '?')
              right++;
              else
              sumright += (int)(s[i] - '0');
          }
      }   

      if(left > right)
      {
          swap(left , right);
          swap(sumleft,sumright);
      }
      if(left == right)
      {
          if(sumleft == sumright)
          cout << "Bicarp";
          else
          cout << "Monocarp";
      }
      else
      {
          if(sumleft <= sumright)
          cout << "Monocarp";
          else
          {
              ll sum = sumleft - sumright;
              ll sum1 = 9 * (right - left) / 2;
                if(sum == sum1)
                cout << "Bicarp";
                else
                cout << "Monocarp";
          }
      }
    }
}