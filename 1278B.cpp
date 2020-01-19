#include<bits/stdc++.h>
 
using namespace std;
#define ll long long int
#define mod 1000000007
 
int main()
{
    
    ll n;
    cin>> n;
    while(n--)
    {
        ll a , b;
        cin >> a >> b;
        if(a == b )
        {
            cout << 0 << endl;
            continue;
        }
        else if(a > b)
        {
            swap(a , b);
        }
        ll diff = b - a;
        ll t1 = (int)(sqrt(1 + 8*diff));
        t1 -= 1;
        t1 /=2;
        ll sum = t1 * (t1 + 1) / 2;
        if(sum == diff)
        cout << t1 <<endl;
        else
        {
            if(diff % 2 == 0)
            {
                if(sum % 2 == 0)
                {
                    if(t1 % 2 == 0)
                    {
                      t1 += 3;  
                    }
                    else
                    {
                        t1++;
                    }
                    
                }
                else
                {
                    if(t1 % 2 == 0)
                    {
                      t1 ++;  
                    }
                    else
                    {
                        t1+=2;
                    }
                }
            }
            else
            {
                if(sum % 2 == 0)
                {
                    if(t1 % 2 == 0)
                    {
                      t1 ++;  
                    }
                    else
                    {
                        t1+=2;
                    }
                    
                }
                else
                {
                    if(t1 % 2 == 0)
                    {
                      t1 +=3;  
                    }
                    else
                    {
                        t1++;
                    }
                }
            }
            cout << t1 << endl;
        }
    }
}
