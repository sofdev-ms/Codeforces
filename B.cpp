#include<bits/stdc++.h>
 
using namespace std;
#define ll long long int
#define mod 1000000007

ll msum(ll a[], ll size , ll start) 
{ 
    ll max_so_far = INT_MIN, max_ending_here = 0; 
  
    for (int i = start; i < size; i++) 
    { 
        max_ending_here = max_ending_here + a[i]; 
        if (max_so_far < max_ending_here) 
            max_so_far = max_ending_here; 
  
        if (max_ending_here < 0) 
            max_ending_here = 0; 
    } 
    return max_so_far; 
} 
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    t = 1;
    cin >> t;
    while(t--)
    {
         ll n;
         cin >> n;
         ll a[n];
         ll total = 0;
         int f = 0;
         for(int i = 0 ;i  < n ;i ++)
         {
             cin >> a[i];
             total += a[i];
             if(a[i] < 0)
             f = 1;
         }
         
             ll mx = msum(a , n, 1);
             ll mx1 = msum(a , n - 1 ,0);
             mx = max(mx , mx1);
             //cout << mx << endl;
             if(mx >= total )
             cout << "NO" << endl;
             else
             cout << "YES"<<endl;
              
        
    }
 
    return 0;
 
}
