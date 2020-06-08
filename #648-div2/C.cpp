#include<bits/stdc++.h>

using namespace std;
#define ll long long int

int main()
{
   ll t;
   t = 1;	
   //cin >> t;
   while(t--){
      ll n;
      cin >> n;
      ll a[n];
      ll b[n];
      ll index[n + 1];
      for(int i =0 ; i < n ; i ++)
      {
          cin >> a[i];
          index[a[i]] = i;
      }
      vector < int > diff;
      for(int i = 0; i < n ; i ++)
      {
          cin >> b[i];
          diff.push_back(index[b[i]] - i);
      }
      ll count[n + 1] = {0};
      ll ans = 1;
        for(int i = 0; i < n ; i ++)
        {
            if(diff[i] < 0)
            {
                diff[i] += n;
            }
            count[diff[i]]++;
            ans = max(ans , count[diff[i]]);
        }      
        cout << ans << endl;

   }
}
