#include<bits/stdc++.h>

using namespace std;
#define ll long long int
#define mod 1000000007

int main()
{
   ll n,k;
   cin >> n >> k;
   string ans = "";
   for(int i = 0 ; i < k ; i ++)
   ans += (char)('a' + i);
   int f = 0;
   for(int i = k; i < n ;i++)
   {
       if(!f)
       ans += 'a';
       else
       ans += 'b';
       
       f = !f;
   }
   cout << ans << endl;
}
