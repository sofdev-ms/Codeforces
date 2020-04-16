#include<bits/stdc++.h>

using namespace std;
#define ll long long int

ll ans = -1;

void solve(vector < ll > &a , vector < ll > &b , vector <ll > &c)
{
    for(auto x : a)
    {
        ll temp = -1 , temp1 = -1;
        ll posb = lower_bound(b.begin(),b.end() , x) - b.begin();
        if(posb == b.size() || b[posb] != x)
        posb--;
        if(posb >= 0)
        {
            temp = b[posb];
        }
        ll posc = lower_bound(c.begin() , c.end() , x) - c.begin();
        if(posc != c.size())
        {
            temp1 = c[posc];
        }
        if(temp !=-1 && temp1 != -1)
        {
            temp = (x - temp1)*(x - temp1) + (x - temp)*(x - temp) + (temp1 - temp)*(temp1 - temp);
            if(ans == -1)
            ans = temp;
            else
            ans = min(ans , temp);
        }
    }
}

int main()
{
    ll t;
    t = 1;
    cin >> t;
    while(t--)
    {
        ll size[3];
        ans = -1;
        cin >> size[0] >> size[1] >> size[2];
        vector < vector < ll > > v;
        for(int i = 0;  i < 3 ; i  ++)
        {
            vector < ll > temp;
            for(int j =0 ; j < size[i]; j ++)
            {
                ll x;
                cin >> x;
                temp.push_back(x);
            }
            sort(temp.begin() , temp.end());
            v.push_back(temp);
        }
        ans = (v[0][0] - v[1][0])*(v[0][0] - v[1][0]) + (v[0][0] - v[2][0])*(v[0][0] - v[2][0]) + (v[2][0] - v[1][0])*(v[2][0] - v[1][0]);
        int arr[3] = {0 , 1 , 2};
        do{
            solve( v[arr[0]] , v[arr[1]] , v[arr[2]]);
        }while(next_permutation(arr , arr + 3));
        cout << ans << endl;
        
    }
}