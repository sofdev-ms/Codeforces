#include<bits/stdc++.h>

using namespace std;
#define ll long long int

int main()
{
   ll t;
   t = 1;	
   //cin t;
   while(t--){
    ll n;
    cin >> n;
    ll a[n];
    for(int i = 0; i < n ; i ++)
    {
        cin >> a[i];
    }         
    sort(a , a + n);
    ll ans = a[0] * a[1] * a[2];
    ll c1 = 0 , c2 = 0 , c3 = 0;
    for(int i= 0 ;i  <n;  i ++)
    {
        if(a[i] == a[0])
        c1++;
        if(a[i] == a[1])
        c2 ++;
        if(a[i] == a[2])
        c3 ++;
    }
   // cout << c1 << " " << c2 << " " << c3 << endl;
    if(a[0] != a[1] && a[0] != a[2] && a[1] != a[2])
    {
        cout << c1 * c2 * c3;
    }
    else if(a[0] == a[1] && a[0] != a[2])
    {
        cout << c3 * c2 * (c2 - 1) / 2 ;
    }
    else if(a[0] == a[2] && a[0] != a[1])
    cout << c2 * c1 * (c1 - 1) / 2 ;
    else if(a[1] == a[2] && a[0] != a[1])
    cout << c1 * (c2) * (c2 - 1) / 2;
    else
    cout << c1 * (c1 - 1) * (c1 - 2) / 6;

   }
}
