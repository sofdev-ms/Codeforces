#include<bits/stdc++.h>
 
using namespace std;
#define ll long long int
 
int main()
{
    ll n;
    cin >> n;
    map < string , int > m;
    while( n-- )
    {
        string s;
        cin >> s;
        if(m.find(s) == m.end())
        {
            cout << "OK" <<endl;
            m[s] = 1;
        }
        else
        {
            cout << s << m[s] <<endl;
            m[s]++;
        }
    }
 
}
