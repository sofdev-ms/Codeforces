#include<bits/stdc++.h>

using namespace std;
#define ll long long int

int main()
{
    ll t;
    t = 1;
    //cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        string a;
        string b;
        cin >> a >> b;
        ll na = 0;
        ll nb = 0;
        vector < int > inda;
        vector < int > indb;
        for(int i = 0; i   < n; i ++)
        {
            if(a[i] != b[i])
            {
                if(a[i] == 'a')
                {
                    na++;
                    inda.push_back(i + 1);
                }
                else
                {
                    nb++;
                    indb.push_back(i + 1);
                }
            }
        }
        int size1 = inda.size();
        int size2 = indb.size();

        if((size1 + size2) % 2 == 0)
        {
            ll ans = size1 / 2 + size2 / 2 + (size1 % 2) + (size2 % 2);
            cout << ans << endl;
            for(int i = 0 ; i < size1 - 1; i +=2)
            cout << inda[i] << " " << inda[i + 1] << endl;
            for(int i = 0 ; i < size2 - 1; i +=2)
            cout << indb[i] << " " << indb[i + 1] << endl;  
            if(size1 % 2 != 0)
            {
                cout << inda[size1 - 1] << " " << inda[size1 - 1] << endl;
                cout << inda[size1 - 1] << " " << indb[size2 - 1] << endl;
            }
        }
        else
        cout << -1 << endl;

    }
}