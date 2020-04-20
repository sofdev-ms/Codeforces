#include<bits/stdc++.h>

using namespace std;
#define ll long long int

ll count1[1000001] = {0};
ll index1[1000001] = {0};

int main()
{
    ll t;
    t = 1;
    //cin >> t
    while(t--)
    {
        ll n;
        cin >> n;
        ll a[n];
        
        vector < int > break1;
        ll cn = 0;
        ll check = 1;
        ll ans = 0;
        if(n % 2 != 0)
        check = 0;
        for(int i =0 ; i < n ; i ++)
        {
            cin >> a[i];
            if(!check)
            continue;

            if(a[i] > 0)
            {
                if(count1[a[i]] == 1)
                {
                    check = 0;
                    continue;
                }
                else if( index1[a[i]] != 0)
                {
                    if(ans == 0)
                    {
                        check = 0;
                        continue;
                    }
                    else if(index1[a[i]] > break1[ans - 1])
                    {
                        check = 0;
                        continue;
                    }
                } 
                count1[a[i]]++;
                index1[a[i]] = i + 1;
                cn++;
            }
            else
            {
                
                if(count1[abs(a[i])] == 0)
                {
                    check = 0;
                    continue;
                }
                count1[abs(a[i])]--;
                cn--;
            }
            if(cn == 0 && a[i] < 0)
            {
                break1.push_back(i + 1);
                ans ++;
            }
        }   
        if(!check || ans == 0 || cn !=0)
        cout << -1 << endl;
        else
        {
            cout << break1.size() << endl;
            int prev =0;
            for(auto x : break1)
            {
                cout << x - prev << " ";
                prev = x ;
            }
        }
    }
}