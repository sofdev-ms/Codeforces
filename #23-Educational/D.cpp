#include<bits/stdc++.h>

using namespace std;
#define ll long long int

int main()
{
   ll t;
   t = 1;	
   //cin t;
   while(t--){
      ll n;
      cin >> n;
      ll a[n];
      for(ll i = 0; i < n; i ++)
      cin >> a[i];
      ll small_right[n];
      ll small_left[n];
      ll large_right[n];
      ll large_left[n];
      stack < ll > s;
      s.push( n - 1);
      small_right[n - 1] = n;
      ll i = n - 2;
      while(i >=0 )
      {
          while(!s.empty() && a[s.top()] >= a[i])
          s.pop();
          if(!s.empty())
          small_right[i] = s.top();
          else
          small_right[i] = n;

          s.push(i);
          i--;  

      }   
      while(!s.empty())
      {
        s.pop();
      }  

      s.push(0);
      small_left[0] = -1;
      i = 1;
      while(i < n )
      {
          while(!s.empty() && a[s.top()] > a[i])
          s.pop();
          if(!s.empty())
          small_left[i] = s.top();
          else
          small_left[i] = -1;
          s.push(i);
          i++;  

      }   
      while(!s.empty())
      {
        s.pop();
      }  
      s.push(n - 1);
      large_right[n - 1] = n;
      i = n - 2;
      while(i >=0 )
      {
          while(!s.empty() && a[s.top()] <= a[i])
          s.pop();
          if(!s.empty())
          large_right[i] = s.top();
          else
          large_right[i] = n;
          
          s.push(i);
          i--;  

      }   
      while(!s.empty())
      {
        s.pop();
      }    

      s.push(0);
      i = 1;
      large_left[0] = -1;
      while(i < n )
      {
          while(!s.empty() && a[s.top()] < a[i])
          s.pop();
          if(!s.empty())
          large_left[i] = s.top();
          else
          large_left[i] = -1;
          s.push(i);
          i++;  

      }   
     while(!s.empty())
      {
        s.pop();
      } 
      ll ans = 0;
      for(ll i = 0 ; i < n ; i ++)
      {
          ans += a[i] * ( (i - large_left[i]) * (large_right[i] - i));
          ans -= a[i] * ( (i - small_left[i]) * (small_right[i] - i));
         // cout << small_left[i] << " " << small_right[i] << " " << large_left[i] << " " << large_right[i] << endl;
      }
      cout << ans << endl;
   }
}

