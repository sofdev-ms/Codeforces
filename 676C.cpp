#include<bits/stdc++.h>

using namespace std;
#define ll long long int

int main()
{
    ll n,m;
    cin >> n >> m;
    string s;
    cin >> s;
    ll temp = 0;
    ll i = 0;
    ll j = 0;
    ll ans = 0;
    while( i < n && j < n)
    {
        while(j < n && temp <=m)
        {
            if(s[j] == 'b')
            {
                temp++;
                if(temp > m)
                break;
            }
            
            j++;
        }
       
        ans = max(ans , j - i);
        while( i <= j && temp > m)
        {
            if(s[i] == 'b')
            temp --;
            
            i++;
        }
        j++;
    }
    i = 0;
    j = 0;
    temp = 0;
    
    while( i < n && j < n)
    {
        while(j < n && temp <=m)
        {
            if(s[j] == 'a')
            {
                temp++;
                if(temp > m)
                break;
            }
            
            j++;
        }
        ans = max(ans , j - i);
        while( i <= j && temp > m)
        {
            if(s[i] == 'a')
            temp --;
            
            i++;
        }
        j++;
    }
    cout << ans << endl;
}
