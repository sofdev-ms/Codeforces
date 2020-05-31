#include<bits/stdc++.h>

using namespace std;
#define ll long long int

int main()
{
   ll t;
   t = 1;	
   cin >> t;
   while(t--){
     string s;
     cin >> s;
     int len = s.length();
     vector < int > x;
     int i = 0;
     
     while( i < len)
     {
         int count = 0;
         while(i < len && s[i] == '0')
         {
             count ++;
             i++;
         }
         if(count!=0)
         x.push_back(count);
         count = 0;
         while(i < len && s[i] == '1')
         {
             count ++;
             i++;
         }
         if(count!=0)
         x.push_back(count);
         

     }
     int zeros = 0;
     int ones = 0;
     ll ans = INT_MAX;
     ll size = x.size();
     //cout << size << " ";
     for(int i =0 ; i < size; i ++)
     {
         if(i % 2 == 0)
         zeros += x[i];
         else
         ones += x[i];
     }
     for(int i = 0 ;i < min((ll)2 , size) ; i ++)
     {
         ll count = 0;
         if( i == 1)
         count += x[0];
         ll rem = 0;
         if( i == 0)
         rem = zeros - x[i];
         else
         rem = ones - x[i];

         for(int j = i + 1; j < size ; j += 2)
         {
             ans = min(ans , rem + count);
             count += x[j];
             if(j != size - 1)
             rem -= x[j + 1];
             ans = min(ans , rem + count);
         }
     }      
     if(size <= 2)
     ans = 0;

     cout << ans << endl;
   }
}
