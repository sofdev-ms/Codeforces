    #include<bits/stdc++.h>

    using namespace std;
    #define ll long long int

    int main(){

        ll t;
        t = 1;

        cin >> t;
        while(t--)
        {
            ll n ,x;
            cin >> n >> x;
            ll a[n];
            for(int i =0 ; i  < n ; i ++)
            cin >> a[i];
            sort(a , a+n);
            ll total = 0;
            ll count = 0;
            ll ans =0;
            for(int i = n - 1; i >=0; i --)
            {
                total += a[i];
                count ++;
                if(total / count >= x)
                ans = count;
            }
            cout << ans << endl;
        }
    }