#include<bits/stdc++.h>
 
using namespace std;
#define ll long long int
#define mod 1000000007
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    t = 1;
    //cin >> t;
    while(t--)
    {
         ll n;
         cin >> n;
         string s;
         cin >> s;
         int left =0 ;
         int right =0 ;
         for(int  i = 0; i  <n ; i ++)
         {
             if(s[i] == 'L')
             left++;
             else
             right ++;
         }
         cout << left + right + 1 << endl;
    }
 
    return 0;
 
}
