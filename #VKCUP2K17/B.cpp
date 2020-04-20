#include<bits/stdc++.h>

using namespace std;
#define ll long long int

int main(){
    vector < string > v;
    for(int i = 0 ; i < 26 ; i ++)
    {
        string temp = "";
        temp += (char)(i + 'A');
        v.push_back(temp);
    }
    for(int i = 0 ; i < 26 ; i ++)
    {
        v.push_back(v[i] + "a");
    }
    ll n , m;
    cin >> n >> m;
    int j = 1;
    int i = 0;
    while( i < n - m + 1)
    {
        string temp;
        cin >> temp;
        if(temp == "NO")
        {
            v[j] = v[i];
            j++;
        }
        else
        {
            j = i + m;
        }
        i++;
    }

    for(int i =0 ; i < n ; i ++)
    cout << v[i] << " ";

}