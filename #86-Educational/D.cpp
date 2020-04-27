#include <bits/stdc++.h>

using namespace std;
#define ll long long int

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    t = 1;
    // cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        ll a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        ll b[k + 1];
        for (int i = 1; i <= k; i++)
        {
            cin >> b[i];
        }
        int i = 0;
        vector<vector<int>> ans;
        i = n - 1;
        int size = 0;
        vector<int> sizes;
        //cout << i << endl;
        ll index[ n + 1];
        memset(index , 0 , sizeof(index));
        while (i >= 0)
        {
            int check = 1;
            
            if(size <= index[b[a[i]]])
            {
                //cout << i << " " << size << " " << index[b[a[i]]] << endl;
                ans.push_back(vector < int > ());
                sizes.push_back(0);
                size++;
            }
            ans[index[b[a[i]]]].push_back(a[i]);
            sizes[index[b[a[i]]]]++;
            if(sizes[index[b[a[i]]]] == b[a[i]])
            index[b[a[i]]]++;

            i--;

            
            
            
        }

        //cout << i << endl;

        // ll top1 =  n;
        // while( i < n)
        // {
        //     vector < int > temp;
        //     top1 = b[a[i]];
        //     while( i < n && top1 != 0)
        //     {
        //         if(top1 != 0)
        //         {
        //             temp.push_back(a[i]);
        //             top1 --;
        //         }
        //         i++;
        //         if( i < n)
        //         top1 = min(top1 , b[a[i]]);
        //     }
        //     ans.push_back(temp);
        // }
        cout << size << endl;
        for (auto temp : ans)
        {
            cout << temp.size() << " ";
            for (auto y : temp)
                cout << y << " ";

            cout << endl;
        }
    }
}