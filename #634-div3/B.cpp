#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n , k , m;
        cin >> n >> k >> m;
        string ans = "";
        int i =0 ;
        while( i < n)
        {
            ans += (char)(i % m + 'a');
            i++;
        }
        cout << ans << endl;
    }

}