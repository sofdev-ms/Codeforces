#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int a[n];
        vector < int >  count[201];
        memset(count , 0 , sizeof(count));
        int pre[201][n + 1];
        for(int i = 1; i <= 200 ; i ++)
        {
            pre[i][0] = 0;
            count[i].push_back(0);
        }
        int count1[201] = {0};
        for(int i =0; i < n ;i  ++)
        {
            cin >> a[i];
            count1[a[i]]++;
            count[a[i]].push_back(i + 1);
            for(int j = 1; j <= 200; j ++)
            {
                pre[j][i + 1] = pre[j][i];
                if( j == a[i])
                pre[j][i + 1]++;
            }
        } 
        int ans = 1;
        for(int i = 0 ; i < n ; i ++)
        {
            int total = 0;
            //cout << count1[a[i]] << " " << pre[a[i]][i + 1] << endl;
            if(count1[a[i]] - pre[a[i]][i + 1] >= pre[a[i]][i + 1])
            {
                total += 2 * pre[a[i]][i + 1];
                int index = count[a[i]][count1[a[i]] - pre[a[i]][i+1] +1];
                //cout << index << endl;
                int mx = 0;
                for(int j = 1; j<= 200; j ++)
                {
                    int temp = pre[j][index - 1] - pre[j][i + 1];
                    mx = max(temp , mx);
                }
                total += mx;
            }
            ans = max(total , ans);
        }
        cout << ans << endl;
        

    }
}