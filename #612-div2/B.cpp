#include<bits/stdc++.h>
 
using namespace std;
#define ll long long int
#define mod 1000000007

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    t = 1;
    //cin >> t;
    while(t--)
    {
        ll n , k;
        cin >> n >> k;
        map < string , int > m;
        vector <string > v;
        for(int  i =0 ; i < n ; i++)
        {
            string s;
            cin >> s;
            v.push_back(s);
            
            m[s] = i + 1;
        }
        ll ans =0 ;
        
        for(int i = 0; i  < n ; i ++)
        {
            bool flag[n] = {0};
            for(int j = i + 1 ; j < n ; j ++)
            {
                if(!flag[j])
                {
                    string temp = "";
                    for(int m = 0 ; m  < k; m ++)
                    {
                        if(v[i][m] == v[j][m])
                        {
                            temp += v[i][m];
                        }
                        else
                        {
                            int a = 0;
                            int b = 0 ;
                            int c = 0;
                            if(v[i][m] == 'S' || v[j][m] == 'S')
                            {
                                a = 1;
                            }
                            if(v[i][m] == 'E' || v[j][m] == 'E')
                            {
                                b = 1;            
                            }
                            if(v[i][m] == 'T' || v[j][m] == 'T')
                            {
                                c = 1;
                            }
                            if(!a)
                            temp += 'S';
                            else if(!b)
                            temp += 'E';
                            else
                            temp += 'T';
                            
                        }
                    }
                    
                    if(m.find(temp) != m.end() && m[temp] - 1 > i && m[temp] - 1 > j)
                    {
                        //cout << temp << " " << v[i] << " " << v[j] << endl; 
                        flag[m[temp] - 1] = true;
                        ans ++;
                    }
                }
                
            }
        }
        cout << ans << endl;
        
    }
    
}
