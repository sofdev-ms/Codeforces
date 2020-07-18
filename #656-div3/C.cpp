#include<bits/stdc++.h>

using namespace std;
#define ll long long int

bool check ( int l , ll a[] , int n)
{
    int i = l + 1;
    while( i < n && a[i] >= a[i - 1])
    {
        i++;
    }
    i++;
    while( i < n && a[i] <= a[i - 1])
    {
        i++;
    }

    return i>=n;
}
int main()
{
   ll t;
   t = 1;	
   cin >> t;
   while(t--){
      ll n;
      cin >> n;
      ll a[n];
      for(int i =0 ; i < n ; i ++)
      {
          cin >> a[i];
      }       
      ll ans = n - 1;
      ll l = 0;
      ll r = n - 1;
      while(l <= r)
      {
          int mid = l + (r - l) / 2;
          if(check(mid, a , n))
          {
              ans = mid;
              r = mid - 1;
          }
          else
          l = mid + 1;
      }
      cout << ans << endl;
   }
}
