#include <bits/stdc++.h>

using namespace std;
#define ll long long int

int main()
{
    ll t;
    t = 1;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        ll a[n];
        ll count[101] = {0};
        vector<int> temp;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (count[a[i]] == 0)
            {
                count[a[i]]++;
                temp.push_back(a[i]);
            }
        }
        int size = temp.size();
        if (size > k)
            cout << "-1" << endl;
        else
        {
            for(int i = 1; i <=n ; i ++)
            {
                if(size == k)
                break;
                else
                {
                    if(count[i] == 0)
                    {
                        temp.push_back(i);
                        size++;
                    }
                }
            }
            cout << n * k << endl;
            for (int i = 0; i < n; i++)
            {
                for(auto x : temp)
                cout << x << " ";
            }
            cout << endl;
        }
    }
}
