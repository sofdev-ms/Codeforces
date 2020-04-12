#include<bits/stdc++.h>

using namespace std;
#define ll long long int

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    t = 1;

    cin >> t;
    while(t--)
    {   
        ll n;
        cin >> n;
        ll a[n];
        for(int i =0 ; i < n; i ++)
        {
            cin >> a[i];
        }
        sort(a, a+n);
        vector < int > ans;
        
        int i =0 ; 
        int j = n - 1;
        while( i < j)
        {
            ans.push_back(a[i]);
            ans.push_back(a[j]);
            i++;
            j--;
        }
        if( i == j)
        ans.push_back(a[i]);



        for(int i = n - 1 ; i >=0  ;i  --)
        cout << ans[i] << " ";

        cout << endl;
    }
}