#include<bits/stdc++.h>

using namespace std;
#define ll long long int

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    t = 1;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        vector <pair <  int ,int >  > temp;
        for(int i = 0 ; i < n ; i ++)
        {
            int x;
            cin >> x;
            temp.push_back( { x , i });
        }   
        sort(temp.begin() , temp.end());
        ll check = 1;
        for(int i = 1; i < n ; i ++)
        {
            int diff = temp[i].second - temp[i - 1].second;
            if(diff > 1)
            {
                check = 0;
            }
        }
        if(check)
        cout << "Yes" <<endl;
        else
        cout << "No" << endl;

    }

}