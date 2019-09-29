#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;
#define mod 1000000007

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int n, a[3];
	cin >> n >> a[0] >> a[1] >> a[2];
	vector<int> dp(n+1, INT_MIN);
	dp[0] = 0;
	for(int i = 1; i <= n; ++i) {
		for(int j = 0; j < 3; ++j)
		if(a[j] <= i)
			dp[i] = max(dp[i], dp[i - a[j]] + 1);
	}
	cout << dp[n] << endl;
	return 0;
}

