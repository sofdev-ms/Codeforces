#include<bits/stdc++.h>

using namespace std;
#define ll long long int

int main()
{
   ll t;
   t = 1;	
   cin >> t;
   while(t--){
           ll n;
           cin >> n;
           ll a[n];
           bool check = true;
           for(int i =0 ; i < n ; i++)
           {
               cin >> a[i];
               if(a[i] != i + 1)
               check = false;
           }  
           if(check)
           cout << "0" << endl;
           else
           {
               check = false;
               int i = 0;
               while(i < n && a[i] == i + 1)
               i++;
               int j = n - 1;
               while(j > i && a[j] == j + 1)
               j--;

               while(i <= j)
               {
                   if(a[i] == i + 1)
                   {
                       check = true;
                       break;
                   }
                   i++;
               }
               if(check)
               cout << "2" << endl;
               else
               cout << "1" << endl;
           }
   }
}
