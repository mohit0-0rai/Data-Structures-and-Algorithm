#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;
#define mod 1000000007

bool cache[100001];

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int n, m;
	cin >> n >> m;
	vector<int> v(n+1), dp(n+1, 0);
	for(int i = 1; i <= n; ++i)
		cin >> v[i];
	dp[n] = 1;
	cache[v[n]] = 1;
	for(int i = n-1; i >= 1; --i) {
		if(!cache[v[i]]) {
			dp[i] = dp[i+1] + 1;
			cache[v[i]] = 1;
		}
		else
			dp[i] = dp[i+1];
	}
	while(m--) {
		int q;
		cin >> q;
		cout << dp[q] << endl;
	}

	return 0;
}

