#include<bits/stdc++.h>

using namespace std;
#define ll long long int
#define mod 1000000007

int main()
{
   string s;
   cin >> s;
   ll m;
   cin >> m;
   ll l = s.length();
   ll count[l + 1] = {0};
   for(int i = 0 ; i < m ; i++)
   {
       ll x;
       cin >> x;
       count[x]++;
   }
   for(int i = 1; 2 * i <=l ; i ++)
   {
       count[i] += count[i - 1];
       if(count[i] % 2!=0)
       swap(s[i - 1] , s[l - i]);
   }
   cout << s << endl;
}
