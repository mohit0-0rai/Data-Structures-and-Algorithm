#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;
#define mod 1000000007

int dp[10001];

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
	int n=0, m=0, t=0;
	while(true)
	{
		cin >> m >> n >> t;
		if(!m && !n && !t)
			break;
		if(m == 1 || n == 1)
			cout << t << endl;
		memset(dp, -1, t*sizeof(int)+1);
		dp[0] = 0;
		for(int i = 0; i <= t; ++i) {
			int x=0, y=0;
			if(i >= n)
				x = dp[i-n] + 1;
			if(i >= m)
				y = dp[i-m] + 1;
			if(max(x, y) > 0)
				dp[i] = max(x, y);
		}
		if(dp[t] >= 0) {
			cout << dp[t] << endl;
			continue;
		}
		for(int i=t-1; i > -1; --i)
		{
      if(dp[i]>=0)
      {
        cout << dp[i] << " " << t-i << endl;
        break;
      }
 
    }
	}
	return 0;
}

