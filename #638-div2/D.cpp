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
             ll sum = 0;
             vector < ll > temp;
             ll i= 0;
             while(sum < n)
             {
                 ll x = 1 << i;
                 if(sum + x > n)
                 break;
                 sum += x;
                 temp.push_back(x);
                 i++;
             }
             if(sum != n)
             temp.push_back( n - sum);

             sort(temp.begin() , temp.end());
             cout << temp.size() - 1 << endl;
             for(int i = 1; i <temp.size(); i ++)
             cout << temp[i] - temp[i - 1] << " ";

             cout << endl;

   }
}
