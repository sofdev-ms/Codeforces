#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int t;
    cin >> t;

    while (t--)
    {
        long long int n, m;
        cin >> n >> m;

        long long int happy[m][2];

        vector<long long int> happy1;

        for (int i = 0; i < m; i++)
        {
            cin >> happy[i][0] >> happy[i][1];
            happy1.push_back(happy[i][0]);
        }
        sort(happy1.begin(), happy1.end());

        long long int total = 0;

        long long int suffix_sum[m + 1];

        suffix_sum[m - 1] = happy1[m - 1];

        for (int i = m - 1; i >= 0; i--)
        {
            suffix_sum[i] = suffix_sum[i + 1] + happy1[i];
        }

        if (n <= m)
            total = max(total, suffix_sum[m - n]);

        for (int i = 0; i < m; i++)
        {
            long long int present = 0;
            long long int c = 0;
            long long int position = upper_bound(happy1.begin(), happy1.end(), happy[i][1]) - happy1.begin();

            c = m - position;
            if (position != m)
                present = suffix_sum[position];

            if (happy[i][0] <= happy[i][1])
            {
                present += happy[i][0];
                c++;
            }

            if (c < n)
                total = max(total, present + (n - c) * happy[i][1]);
        }
        cout << total << endl;
        string str;
        getline(cin, str);
    }
}
