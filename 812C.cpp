#include<bits/stdc++.h>

using namespace std;
#define ll long long int
#define mod 1000000007

ll find(ll t , ll a[] , ll n)
{
    vector <ll > temp;
    for(int i = 0; i < n ; i ++)
    {
        temp.push_back(a[i] + (i + 1) * t);
    }
    sort(temp.begin() , temp.end());
    ll total = 0;
    for(int i = 0;  i< t; i ++)
    total += temp[i];
    
    return total;
}

int main()
{
   
   ll n , m;
   cin >> n >> m;
   ll a[n];
   for(int i =0 ; i < n ; i++)
   cin >> a[i];
   
   ll l = 1;
   ll r = n;
   ll ans = 0;
   ll c = 0;
   while( l<= r)
   {
       ll mid = l + (r - l)/2;
       ll cost = find(mid , a , n);
       if(cost <= m)
       {
           ans = mid;
           c = cost;
           l = mid + 1;
       }
       else
       r = mid - 1;
   }
   cout << ans << " " << c << endl;
  
}
