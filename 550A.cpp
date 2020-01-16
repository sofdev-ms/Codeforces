#include<bits/stdc++.h>
 
using namespace std;
#define ll long long int
 
int main()
{
    string s;
    cin >> s;
    int l = s.length();
    ll mn1 =-1, mx1= -1;
    ll mn = -1,mx = -1;
    for(int i = 0 ; i < l - 1; i ++)
    {
        if(s[i] == 'A' && s[i + 1] == 'B')
        {
            if(mn == -1)
            {
                mn = i;
                mx = i;
            }
            else
            {
                mx = i;
            }
        }
        else if(s[i] == 'B' && s[i + 1] == 'A')
        {
            if(mn1 == -1)
            {
                mn1 = i;
                mx1 = i;
            }
            else
            {
                mx1 = i;
            }
        }
    }
    if( mn == -1 || mn1 == -1)
    {
        cout << "NO" << endl;
    }
    else
    {
        if( mx1 - mn >=2 || mx -mn1 >=2)
        cout << "YES" <<endl;
        else
        cout << "NO" << endl;
    }
 
}
