#include<bits/stdc++.h>

using namespace std;
#define ll long long int

int main()
{
   ll t;
   t = 1;	
   cin >> t;
   while(t--){
        ll n , m;
        cin >> n >> m;
        ll a[n][m];
        int rows = 0;
        int col = 0;
        int coll[m] = {0};
        int row[n] = {0};
        for(int i =0 ; i < n ; i ++)
        {
            int check = 0;
            for(int j = 0 ;j < m ; j ++)
            {
                cin >> a[i][j];
                if(a[i][j] == 1)
                {
                    check = 1;
                    coll[j] = 1;
                    row[i] = 1;
                }
            }
            if(check)
            rows++;
        }
        int count = 0;
        for(int i =0 ; i < n ; i ++)
        {
            for(int j  =0 ;  j < m ; j ++)
            {
                if(row[i] == 0 && coll[j] == 0)
                {
                    count ++;
                    row[i] = 1;
                    coll[j] = 1;
                }
            }
        }
        
        if(count % 2 == 0)
        {
            cout << "Vivek" << endl;
        }
        else
        cout << "Ashish" << endl;
   }
}
