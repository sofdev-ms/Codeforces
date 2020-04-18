#include<bits/stdc++.h>

using namespace std;
#define ll long long int

int main(){
    ll t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        string s;
        cin >> s;
        ll x = 0;
        ll y = 0;
        ll ans = n + 2;
        ll x1 = -1;
        ll y1 = -1;
        map < pair < int ,int > , int > m;
        m[{0 , 0}] =-1;
        for(int i =0 ; i < n ; i ++)
        {
            if(s[i] == 'L')
            {
                x++;
            }
            else if(s[i] == 'R')
            {
                x--;
            }
            else if(s[i] == 'U')
            y++;
            else
            y--;

            if(m.find({x , y}) != m .end())
            {
                int prev = m[{x,  y}];
                if( i - prev < ans)
                {
                    ans = i - prev;
                    x1 = prev + 1;
                    y1 = i;
                }
            }
            

            m[{x , y}] = i;
            
        }
        if(ans == n + 2)
        cout << "-1" << endl;
        else
        {
            cout << x1 + 1 << " " << y1 + 1<< endl;
        }
    }
}