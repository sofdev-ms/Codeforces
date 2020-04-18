#include<bits/stdc++.h>

using namespace std;
#define ll long long int

int main(){
    ll t;
    t = 1;
    while(t--)
    {
        ll n , a , b , k;
        cin >> n >> a >> b >> k;
        vector < int > temp;
        ll sum = a + b;
        ll ans = 0;
        for(int i = 0 ;i  < n; i ++)
        {
            ll x;
            cin >> x;
            ll rem = x % sum;
            if(rem >= 1 && rem <= a)
            ans ++;
            else
            {
                if(rem == 0)
                rem = b;
                else
                rem = rem - a;
                temp.push_back((rem + a - 1) / a);
            }
        }
        sort(temp.begin() , temp.end());
        int i = 0;
        while(k!=0 && i < temp.size())
        {
            
            k -= temp[i];
            i++;
            if(k >=0)
            ans ++;
        }
        
        cout << ans << endl;
    }
}