#include<bits/stdc++.h>

using namespace std;
#define ll long long int
int dp[2001][10][2001];
int find(string x , string y)
{
    int ans = 0;
    for(int i = 0 ; i < 7 ; i  ++)
    {
        if(y[i] == '0' && x[i] == '1')
        ans ++;
        else if(y[i] == '1' && x[i] == '0')
        return -1;
    }
    return ans;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll  n , k1;
    cin >> n >> k1;
    string m[10] = {"1110111", "0010010", "1011101", "1011011", "0111010", "1101011", "1101111", "1010010", "1111111", "1111011"} ;
    string arr[n];
    ll mx = 7;
    memset(dp , 0 ,sizeof(dp));
    ll req[n][10];
    for(int i = 0; i < n ; i ++)
    cin >> arr[i];
    for(int i = n - 1; i  >=0 ; i --)
    {
        for(int j = 0 ; j<= 9 ; j ++)
        {
             ll temp = find(m[j],arr[i]);
             req[i][j] = temp;
            // cout << temp << " ";
            if( i != n - 1 && temp != -1)
            {
                for(int k = temp; k<= k1 ; k ++)
                {
                    for(int z = 9 ; z >=0 ; z--)
                    {
                        if(dp[ i + 1][z][k - temp])
                        {
                            dp[i][j][k] = 1;
                            break;
                        }
                    }
                }
            }
            else
            {
                if(temp!= -1)
                dp[i][j][temp] = 1;  
                 
            }
        }
        // cout << endl

        
    }
    string ans = "";
    for(int i =0  ;i < n; i  ++)
    {
        bool check = 0;
        for(int j = 9; j >=0 ; j --)
        {
            if(dp[i][j][k1] == 1)
            {
                ans = ans + (char)(j + '0');
                k1 -= req[i][j];
                check = 1;
                break;

            }
        }
        if(!check)
        {
            cout << "-1" ;
            return 0;
        }
    }
    cout << ans << endl;
    
}