#include<bits/stdc++.h>
 
using namespace std;
#define ll long long int
 
int main()
{
    string s;
    cin >> s;
    int l = s.length();
    int f =0 ;
    string ans = "";
    for(int i = 0 ; i < l ; i++)
    {
        if(s[i] == '0' || s[i] == '8')
        {
            f = 1;
            ans += s[i];
            break;
        }
    }
    
    if(f)
    {
        cout << "YES" <<endl;
        cout << ans << endl;
        return 0;
    }
    
    for(int i = 0 ; i < l - 1; i ++)
    {
        for(int j = i + 1 ; j < l ; j ++)
        {
            string temp = "";
            temp += s[i];
            temp += s[j];
            int x = atoi(temp.c_str());
            if(x % 8 == 0)
            {
                f = 1;
                ans = temp;
                break;
            }
        }
    }
    
    if(f)
    {
        cout << "YES" <<endl;
        cout << ans << endl;
        return 0;
    }
    
    for(int i = 0 ; i < l - 2; i  ++)
    {
        for(int j = i + 1 ; j< l- 1 ; j ++)
        {
            for(int k = j + 1 ; k < l ; k ++)
            {
                string temp = "";
                temp += s[i];
                temp += s[j];
                temp += s[k];
                int x = atoi(temp.c_str());
                if(x % 8 == 0)
                {
                    f = 1;
                    ans = temp;
                    break;
                } 
            }
        }
    }
    if(f)
    {
        cout << "YES" <<endl;
        cout << ans << endl;
        return 0;
    }
    else
    {
        cout << "NO" <<endl;
        return 0;
    }
}
