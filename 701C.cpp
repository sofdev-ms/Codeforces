#include<bits/stdc++.h>

using namespace std;
#define ll long long int
#define mod 1000000007



int main()
{
   ll n;
   cin >> n;
   string s;
   cin >> s;
   int l = s.length();
   map < char , int > m;
   int count = 0;
   for(int i = 0;  i< n ; i ++)
   {
       if(m.find(s[i]) == m.end())
       {
           count ++;
           m[s[i]] = 1;
       }
       else
       m[s[i]]++;
       
   }
   int i = 0;
   int j = 0;
   int total = 0;
   int m1[257] = {0};

   int ans = INT_MAX;
   while( i < l && j < l)
   {
       while(j < l && total!=count)
       {
           if(m1[s[j]] == 0)
           {
               total ++;
           }
           m1[s[j]]++;
           j++;
       }
       ans = min(ans , j - i);
       while(total == count && i <=j)
       {
           m1[s[i]]--;
           ans = min(ans , j- i);
           if(m1[s[i]] == 0)
           total --;
           
           i++;
       }
   }
   cout << ans << endl;
 
  
}
