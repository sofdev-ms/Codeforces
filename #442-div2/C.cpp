#include<bits/stdc++.h>

using namespace std;
#define ll long long int

int main(){
    ll n;
    cin >> n;
    ll l = 2;
    ll r = n - 1;
    vector < int > temp;
    vector < int > temp1;
    while( l <=r )
    {

        temp.push_back(l);
        temp1.push_back(l);
        if( l != r)
        {
            temp1.push_back(r);
            temp.push_back(r);
        }
        l--;
        r ++;
        if( l<= r)
        {
            temp1.push_back(l);
            temp1.push_back(r);
        }
        l += 3;
        r -= 3;

    }
    if( n % 2 == 0 && ( n / 2) % 2 != 0)
    {
        temp1.push_back(n / 2);
        temp1.push_back(n / 2 + 1);
        temp1.push_back(n / 2);
        //cout << n / 2 << " " << n / 2 + 1 << " " << n / 2 << " ";
    }
    else if(n % 2 != 0 && ( n / 2) % 2 == 0)
    {
        temp1.push_back(n / 2 + 1);
        // cout << n / 2 + 1 << " ";
    }
    cout << temp1.size() + temp.size() << endl;
    for(auto x : temp1)
    cout << x << " ";
    for(auto x : temp)
    cout << x << " ";
}