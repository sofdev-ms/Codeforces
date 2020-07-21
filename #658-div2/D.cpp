#include<bits/stdc++.h>

using namespace std;
#define ll long long int
bool findPartiion (vector < int > arr, int n)  
{  
    int sum = 0;  
    int i, j;   
    for (i = 0; i < n; i++)  
    sum += arr[i];  
      
    if (sum % 2 != 0)  
    return false;  
      
    bool part[sum / 2 + 1][n + 1];   
    for (i = 0; i <= n; i++)  
    part[0][i] = true;  
    for (i = 1; i <= sum / 2; i++)  
    part[i][0] = false; 
    for (i = 1; i <= sum / 2; i++)  
    {  
        for (j = 1; j <= n; j++)  
        {  
            part[i][j] = part[i][j - 1];  
            if (i >= arr[j - 1])  
            part[i][j] = part[i][j] ||  
                         part[i - arr[j - 1]][j - 1];  
        }      
    }  
      
    return part[sum / 2][n];  
}  
int main()
{
   ll t;
   t = 1;	
   cin >> t;
   while(t--){
    ll n;
    cin >> n;
    ll a[ 2 * n];
    vector < int > count;
    for(int i = 0;  i< 2 * n ; i ++)
    cin >> a[i];
    stack < int > s;
    int large_left[2 * n];
    s.push(0);
    int i = 1;
    large_left[0] = -1;
    while( i < 2 * n)
    {
        while(!s.empty() && a[s.top()] < a[i])
        s.pop();

        if(!s.empty())
        large_left[i] = s.top();
        else
        large_left[i] = -1;

        s.push(i);
        i++;
    }
    i = 2 * n - 1;
    int prev = 2 * n;
    while(i >=0 )
    {
        while( i >= 0 && large_left[i] != -1)
        {
            i = large_left[i];
        }
        count.push_back(prev - i);
        prev = i;
        i--;
    }
    int size = count.size();
    if(findPartiion(count , size))
    cout << "YES" << endl;
    else
    cout << "NO" << endl;
   }
}
