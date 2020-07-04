#include<bits/stdc++.h>

using namespace std;
#define ll long long int

int main()
{
   ll t;
   t = 1;	
   cin >> t;
   while(t--){
          ll n , k;
          cin >> n >> k;
          ll a[n];
          ll b[k];
          for(int i =0 ; i < n ; i ++)
          {
              cin >> a[i];

          } 
          for(int i =0 ; i < k ; i ++)
          cin >> b[i];
          sort(a, a + n);
          sort(b , b + k);

          ll ans = 0;
          int j = n - 1;
          for(int i =0 ; i < k ; i ++)
          {
              ans += a[j];
              b[i]--;
              if(b[i] == 0)
              ans += a[j];

              j--;
          }
          j = 0;
          for(int i = k - 1; i>=0 ; i --)
          {
              if(b[i] != 0)
              {
                  ans += a[j];
                  j++;
                  b[i]--;
                  while(b[i] !=0)
                  {
                      j++;
                      b[i]--;
                  }
              }
          }
          cout << ans << endl;
   }
}
