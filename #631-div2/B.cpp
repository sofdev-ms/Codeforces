#include<bits/stdc++.h>

using namespace std;
#define ll long long int

int main(){
    ll t;
    t = 1;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        ll a[n];
        map < int , int > m;
        int ans = 0;
        vector <pair<int ,int >> v;
        ll mn = INT_MAX;
        ll mx = 0;
        ll mn1 = INT_MAX;
        ll mx1 = 0;
        ll b[n];
        for(int i =0 ; i < n; i ++)
        {
            cin >> a[i];
            b[i] = a[i];
        }
        sort(a, a+n);
        int l1 = 0;
        int l2 = 0;
        for(int i = 0 ; i< n ; i ++)
        {
            if(m[a[i]] == 1)
            {
                m[a[i]] = 2;
                mn = min(mn , a[i]);
                mx = max(mx , a[i]);
                l2++;
            }
            else if(!m[a[i]])
            {
                m[a[i]] = 1;
                mn1 = min(mn1 , a[i]);
                mx1 = max(mx1 , a[i]);
                l1++;
                
            }
        }
        
        if(mn1 == 1 && mx1 == l1 && mn == 1 && mx == l2 && (l1 + l2 == n))
        {
            mn = INT_MAX;
            mx = 0;
            map < int ,int > m2;
            for(int i =0 ; i < n; i ++)
            {
                
                if(!m2[b[i]])
                {
                        mn = min(mn , b[i]);
                        mx = max(mx , b[i]);
                        m2[b[i]] = 1;
                        if(mn == 1 && mx == i + 1 && ( i + 1 == l1 || i + 1 == l2))
                        {
                            ans ++;
                            v.push_back({i + 1 , n - i - 1});
                        }
                }
                
                
            }
            
            cout << ans << endl;
            for(auto x : v)
            {
                cout << x.first << " " << x.second << endl;
            }
            
        }
        else
        {
            cout << 0 << endl;
        }





        
    }
}