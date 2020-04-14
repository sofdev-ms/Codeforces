#include<bits/stdc++.h>

using namespace std;
#define ll long long int

int main(){
    ll t;
    cin >> t;
    while(t--)
    {
        char a[9][9];
        for(int i =0 ; i < 9 ; i ++)
        {
            for(int j = 0 ; j  <9 ; j ++)
            {
                cin >> a[i][j];
            }
        }
        a[0][8] =a[0][7];
        a[1][5] =a[1][4];
        a[2][2] =a[2][1];

        a[3][7] =a[3][8];
        a[4][4] =a[4][5];
        a[5][1] =a[5][2];
        
        a[6][6] =a[6][7];
        a[7][3] =a[7][4];
        a[8][0] =a[8][1];
        cout << endl;
        for(int i =0 ; i < 9 ; i ++)
        {
            for(int j = 0 ; j  <9 ; j ++)
            {
                cout << a[i][j];
            }
            cout << endl;
        }
        
    }
}