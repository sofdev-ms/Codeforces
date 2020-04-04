#include<bits/stdc++.h>

using namespace std;
#define ll long long int

int main()
{
    ll t;
    t = 1;
    cin >> t;
    while(t--)
    {
        ll a , b , c , d;
        cin >> a >> b >> c >> d;
        ll x ,y , x1 , x2 , y1 , y2 ;
        cin >> x  >> y >> x1 >> y1 >> x2 >> y2 ;

        int flag= 1;
        int movel = abs(x - x1);
        int mover = abs(x - x2);

        int move = a - b;
        if(move < 0)
        {
            if(mover < abs(move))
            flag = 0;
        }
        else if(move > 0)
        {
            if(movel < move)
            flag = 0;
        }
        else
        {
            if(movel == 0 && mover == 0 && (a!=0 && b!=0))
            flag = 0;
        }

        int movet = abs(y - y1);
        int moved = abs(y - y2);

        move = c - d;
        if(move < 0)
        {
            if(moved < abs(move))
            flag = 0;
        }
        else if(move > 0)
        {
            if(movet < abs(move))
            flag = 0;
        }
        else
        {
            if(movet == 0 && moved == 0 && (c!=0 && d!=0))
            flag = 0;
        }
        if(flag)
        cout << "YES" << endl;
        else
        cout << "NO" << endl;
    }
}