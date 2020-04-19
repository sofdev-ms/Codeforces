#include<bits/stdc++.h>

using namespace std;
#define ll long long int

int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
           string a , b , c;
           cin >> a >> b >> c;
           int len = a.length();
           int flag = 1;
           for(int i =0 ; i < len ; i ++)
           {
               if(b[i] == c[i] || a[i] == c[i])
               {
                   flag = 1;
               }
               else
               {
                   flag = 0;
                   break;
               }
           }
           if(flag)
           cout << "YES" << endl;
           else
           cout << "NO" <<endl;
    }
}