#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;
#define MOD 1000000007

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int	fee = 0, n = 0;
	while(true) {
		cin >> fee >> n;
		if(fee == 0 || n == 0)
			break;
		int dp[n+1][fee+1];
		vi cost(n), fun(n);
		for(int i = 0; i < n; ++i)
			cin >> cost[i] >> fun[i];
		for(int i = 0; i <= n; ++i)
			dp[i][0] = 0;
		for(int i = 1; i <= fee; ++i)
			dp[0][i] = 0;
		for(int i = 1; i <= n; ++i) {
			for(int j = 1; j <= fee; ++j) {
				dp[i][j] = dp[i-1][j];
				if(cost[i-1] <= j)
					dp[i][j] = max(dp[i][j], dp[i-1][j - cost[i-1]] + fun[i-1]);
			}
		}
		for(int i = 0; i <= fee; ++i) {
			if(dp[n][i] == dp[n][fee]) {
				cout << i << " "  << dp[n][i] << endl;
				break;
			}
		}
	}
	return 0;
}

