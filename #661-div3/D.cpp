#include<bits/stdc++.h>
using namespace std;

#define watch(x) cout << (#x) << " = " << (x) << endl
#define PI double(2 * acos(0.0))
#define LL long long
#define MOD 1000000007
#define all(x) (x).begin(), (x).end()
#define INF 1e15

int main()  {
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int t;
    cin >> t;
    while(t--)	{
    	int n;
    	cin >> n;
    	string s;
    	cin >> s;
    	int ans[n];
    	vector<int> zero;
    	vector<int> one;
    	int count = 0;
    	for(int i = 0; i < n; i++)	{
    		if(s[i] == '0')	{
    			if((int)zero.size() != 0)	{
    				int index = zero[(int)zero.size() - 1];
    				zero.pop_back();
    				ans[i] = index;
    				one.push_back(index);
    			} else	{
    				count++;
    				ans[i] = count;
    				one.push_back(count);
    			}
    		} else 	{
    			if((int)one.size() != 0)	{
    				int index = one[(int)one.size() - 1];
    				one.pop_back();
    				ans[i] = index;
    				zero.push_back(index);
    			} else	{
    				count++;
    				ans[i] = count;
    				zero.push_back(count);
    			}
    		}
    	}
		vector < pair < int , int > > temp;
		temp.push_back({ 0 , 1});
		
    	cout << count << "\n";
    	for(auto x: ans)	{
    		cout << x << " ";
    	}
    	cout << "\n";
    }
    return 0;
}

