#include<bits/stdc++.h>
 
using namespace std;
#define ll long long int
bool sortb(const pair < int , int > p1 , const pair < int ,int > p2)
{
    if(p1.first == p2.first)
    return p1.second < p2.second;
    return p1.first < p2.first;
}
int main()
{
    ll n;
    cin >> n;
    vector < pair < ll ,ll > > v;
    for(int i = 0; i  <n ; i++)
    {
        ll x, y;
        cin >> x >> y;
        v.push_back({x , y});
    }
    sort(v.begin() , v.end() , sortb);
    int present = v[0].second;
    int ans = present;
    for(int i = 1 ; i < n ; i ++)
    {
        if(v[i].second >= present)
        present = v[i].second;
        else
        present = v[i].first;
    }
    cout << present << endl;
}
