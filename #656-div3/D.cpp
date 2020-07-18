#include<bits/stdc++.h>

using namespace std;
#define ll long long int
string s;
int check(int l , int r , char present)
{
    ////cout << l << " " << r << endl;
    if(l == r)
    {
        if(s[l] == present)
        return 0;
        else
        return 1;
    }
    int x = INT_MAX;
    int t = 0;
    int mid = l + (r - l) / 2;
    for(int i = l ; i <= mid ; i ++)
    {
        if(s[i] != present)
        t++;
    }
    x = t + check(mid + 1, r , present + 1);
    t = 0;
    for(int i = mid + 1 ; i <= r ; i ++)
    {
        if(s[i] != present)
        t++;
    }
    x = min(x , t + check( l , mid, present + 1));

    return x;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
   ll t;
   t = 1;	
   cin >> t;
   while(t--){
        int n;
        cin >> n;
        cin >> s;
       // cout << "YEs" << endl;
        cout << check(0 , n - 1, 'a') << endl;
   }
}
