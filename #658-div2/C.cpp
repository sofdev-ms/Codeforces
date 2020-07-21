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
          string a ,b;
          cin >> a>> b;
          int temp = int(a[ n - 1] - '0');
          vector < int > ans;
          ans.push_back(1);
          for(int i = 1; i < n ; i ++)
          {
              if(a[i] != a[i - 1])
              ans.push_back(i + 1);
          }
          temp = !temp;
          vector < int > ans2;
          int size = ans.size();
          
          
          vector < int > ans1;
          for(int i = n - 1; i >=0 ; i --)
          {
              if((int)(b[i] - '0') != temp)
              {
                  ans1.push_back(i + 1);
                  temp = !temp;
              }
          }
          cout << size + ans1.size()<< " ";
          for(int i = 1; i < size ; i ++)
          cout << ans[i] - 1 << " ";
          cout << n << " ";
          for(auto x : ans1)
          cout << x << " ";
          cout << endl;
   }
}
