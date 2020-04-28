#include<bits/stdc++.h>

using namespace std;
#define ll long long int

int main()
{
    ll t;
    cin >> t;
    string a ;
    cin >> a;
    int count[10] = {0};
    vector < int > ans;
    for(int i = 0 ; i < t ; i ++)
    {
        if(a[i] =='2' || a[i] == '3' || a[i] =='5' || a[i] == '7')
        {
            ans.push_back((int)(a[i] - '0'));   
        }
        else if(a[i] == '4')
        {
            ans.push_back(3);
            ans.push_back(2);
            ans.push_back(2);
        }
        else if(a[i] == '6')
        {
            ans.push_back(5);
            ans.push_back(3);
            
        }
        else if(a[i] == '8')
        {
            ans.push_back(7);
            ans.push_back(2);
            ans.push_back(2);
            ans.push_back(2);
        }
        else if(a[i] == '9')
        {
            ans.push_back(7);ans.push_back(3);ans.push_back(3);ans.push_back(2);
        }
    }
    sort(ans.begin() , ans.end() , greater < int > ());
    for(auto x : ans)
    cout << x ;
}