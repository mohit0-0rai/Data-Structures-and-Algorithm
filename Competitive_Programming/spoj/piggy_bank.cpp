#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;
#define mod 1000000007


int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int t;
	cin >> t;
	while(t--) {
		int e, f, n, W;
		cin >> e >> f >> n;
		W =	f - e;
		vector<int> wt(n), val(n);
		for(int i = 0; i < n; ++i)
			cin >> val[i] >> wt[i];
		int dp[W+1];
		fill(dp, dp+(W+1), INT_MAX);
		dp[0] = 0;
		for(int w = 0; w <= W; ++w)
			for(int i = 0; i < n; ++i)
				if(wt[i] <= w) {
					dp[w] = min(dp[w], dp[w - wt[i]] + val[i]);
				}
		if(dp[W] < INT_MAX && dp[W] >= 0)
			cout << "The minimum amount of money in the piggy-bank is " << dp[W] << "." << endl;
		else
			cout << "This is impossible." << endl;
	}
	return 0;
}

