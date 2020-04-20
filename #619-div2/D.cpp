#include <bits/stdc++.h>

using namespace std;
#define ll long long int

int main()
{
    ll n, m, k;
    cin >> n >> m >> k;

    int i = 1;
    ll total = 4 * n * m - 2 * (n + m);
    if (k > total)
    {
        cout << "NO" << endl;
        return 0;
    }
    cout << "YES" << endl;
    vector<string> ans;
    vector<int> temp;
    if (k > 0 && (m - 1) != 0)
    {

        temp.push_back(min(k, m - 1));
        ans.push_back(" R");
        k -= (m - 1);
    }
    if (k > 0 && (m - 1) != 0)
    {
        temp.push_back(min(k, m - 1));
        ans.push_back(" L");
        k -= (m - 1);
    }
    while (i < n && k > 0)
    {
        temp.push_back(1);
        ans.push_back(" D");
        k--;
        if (k > 0 && (m - 1)!=0)
        {
            temp.push_back(min(k, m - 1));
            ans.push_back(" R");
            k -= (m - 1);
        }
        if (k > 0 && k >= (3 * m - 3) && (m - 1) != 0)
        {
            temp.push_back(m - 1);
            ans.push_back(" UDL");
            k -= (3 * m - 3);
        }
        else if (k > 0)
        {
            if (k >= 3 && (m - 1) != 0)
            {
                temp.push_back(min(k / 3, m - 1));
                ans.push_back(" UDL");
                k -= 3 * min(k / 3, m - 1);
            }
            if (k == 1)
            {
                temp.push_back(1);
                ans.push_back(" U");
                k = 0;
            }
            else if (k == 2)
            {
                temp.push_back(1);
                ans.push_back(" UD");
                k = 0;
            }

            
        }
        i++;
    }
    if (k > 0 && ( n - 1) != 0)
    {
        temp.push_back(min(k, n - 1));
        ans.push_back(" U");
    }
    int size1 = ans.size();
    cout << size1 << endl;
    for (int i = 0; i < size1; i++)
    {
        cout << temp[i] << ans[i] << endl;
    }
}