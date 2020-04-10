#include<bits/stdc++.h>

using namespace std;
#define ll long long int 

int main(){
    ll t;
    t = 1;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        ll a[n],b[n];
        int flag = 1;
        int count = 0;
        int count1 = 0;
        for(int i =0 ; i < n - 1 ; i++)
        {
            cin >> a[i];
            if(a[i] == 1)
            count ++;
            else if(a[i] == -1)
            count1 ++;
        }
        cin >> a[n - 1];
        
        for(int i = 0 ; i <  n ; i ++)
        {
            cin >> b[i];
            
        }
        for(int i = n - 1; i >=0 ; i --)
        {
            
            if(a[i] != b[i])
            {
                if(a[i] < b[i])
                {
                    if(count <= 0)
                    flag = 0;
                }
                else
                {
                    if(count1 <= 0)
                    flag = 0;
                }
            }
            
        }

        if(flag == 0)
        cout << "NO" << endl;
        else
        cout << "YES" << endl;
     }
}#include<bits/stdc++.h>

using namespace std;
#define ll long long int 

int main(){
    ll t;
    t = 1;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        ll a[n],b[n];
        int flag = 1;
        int count = 0;
        int count1 = 0;
        for(int i =0 ; i < n - 1 ; i++)
        {
            cin >> a[i];
            if(a[i] == 1)
            count ++;
            else if(a[i] == -1)
            count1 ++;
        }
        cin >> a[n - 1];
        
        for(int i = 0 ; i <  n ; i ++)
        {
            cin >> b[i];
            
        }
        for(int i = n - 1; i >=0 ; i --)
        {
            
            if(a[i] != b[i])
            {
                if(a[i] < b[i])
                {
                    if(count <= 0)
                    flag = 0;
                }
                else
                {
                    if(count1 <= 0)
                    flag = 0;
                }
            }
            
        }

        if(flag == 0)
        cout << "NO" << endl;
        else
        cout << "YES" << endl;
     }
}#include<bits/stdc++.h>

using namespace std;
#define ll long long int 

int main(){
    ll t;
    t = 1;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        ll a[n],b[n];
        int flag = 1;
        int count = 0;
        int count1 = 0;
        for(int i =0 ; i < n - 1 ; i++)
        {
            cin >> a[i];
            if(a[i] == 1)
            count ++;
            else if(a[i] == -1)
            count1 ++;
        }
        cin >> a[n - 1];
        
        for(int i = 0 ; i <  n ; i ++)
        {
            cin >> b[i];
            
        }
        for(int i = n - 1; i >=0 ; i --)
        {
            
            if(a[i] != b[i])
            {
                if(a[i] < b[i])
                {
                    if(count <= 0)
                    flag = 0;
                }
                else
                {
                    if(count1 <= 0)
                    flag = 0;
                }
            }
            
        }

        if(flag == 0)
        cout << "NO" << endl;
        else
        cout << "YES" << endl;
     }
}#include<bits/stdc++.h>

using namespace std;
#define ll long long int 

int main(){
    ll t;
    t = 1;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        ll a[n],b[n];
        int flag = 1;
        int count = 0;
        int count1 = 0;
        for(int i =0 ; i < n - 1 ; i++)
        {
            cin >> a[i];
            if(a[i] == 1)
            count ++;
            else if(a[i] == -1)
            count1 ++;
        }
        cin >> a[n - 1];
        
        for(int i = 0 ; i <  n ; i ++)
        {
            cin >> b[i];
            
        }
        for(int i = n - 1; i >=0 ; i --)
        {
            
            if(a[i] != b[i])
            {
                if(a[i] < b[i])
                {
                    if(count <= 0)
                    flag = 0;
                }
                else
                {
                    if(count1 <= 0)
                    flag = 0;
                }
            }
            
        }

        if(flag == 0)
        cout << "NO" << endl;
        else
        cout << "YES" << endl;
     }
}