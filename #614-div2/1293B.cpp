#include<bits/stdc++.h>
 
using namespace std;
#define ll long long int
 
int main()
{
    long double n;
    cin >> n;
    double ans = 0;
    for(long double i = 1; i<=n ; i ++)
    {
        ans += 1 / i;
    }
    cout << fixed;
    cout << setprecision(6) << ans << endl;
    
    
}
