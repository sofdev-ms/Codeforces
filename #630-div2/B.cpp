#include<bits/stdc++.h>

using namespace std;
#define ll long long int

int main()
{
    

    ll t;
    t = 1;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        ll b[n];
        ll prime[11] = {2 , 3 , 5 , 7 , 11 , 13, 17 ,19 ,23,29 , 31};
        ll color[11] = {0};
        int count = 0;
        int ans[n];
        for(int i = 0 ; i < n ; i ++)
        {
            cin >> b[i];
            int j = 0;
            while(j  < 11)
            {
                if(b[i] % prime[j] == 0)
                {
                    if(color[j] == 0)
                    {
                        count ++;
                        color[j] = count;
                    }
                    ans[i] = color[j];
                    break;
                }
                j++;
            }
            
       }
       cout << count << endl;
       for(auto x : ans)
       cout << x << " ";
       cout << endl;

    }
}