#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;
#define MOD 1000000007

int tim[52][52], toll[52][52], dp[52][1002];

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int n=0, t=0, opt = -1;
	while(true) {
		cin >> n >> t;
		if(n == 0 && t == 0)
			break;
		for(int i = 0; i < n; ++i)
			for(int j = 0; j < n; ++j)
				cin >> tim[i][j];
		for(int i = 0; i < n; ++i)
			for(int j = 0; j < n; ++j)
				cin >> toll[i][j];
		
		for(int i = 0; i <= n; ++i)
			for(int j = 0; j <= t; ++j)
				dp[i][j] = 1e9;
		for(int i = 0; i <= t; ++i)
			dp[1][i] = 0;
		for(int i = 1; i <= t; ++i) {
			for(int j = 1; j <= n; ++j) {
					dp[j][i] = dp[j][i-1];
				for(int k = 1; k <= n; ++k) {
					if(j == k) continue;
					if(tim[k-1][j-1] <= i)
						dp[j][i] = min(dp[j][i], dp[k][i - tim[k-1][j-1]] + toll[k-1][j-1]);
				}
			}
			if(dp[n][i] != dp[n][i-1])
				opt = i;
		}
		cout << dp[n][opt] << " " << opt << endl;
	}
	return 0;
}

