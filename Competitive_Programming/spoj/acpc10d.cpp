#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;
#define MOD 1000000007
const int MAXN = 1e5;
ll dp[MAXN][3];

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int t=1, n, idx[4][2] = {{0,-1}, {-1, 0}, {-1, -1}, {-1, 1}};
	while(true) {
		cin >> n;
		if(n == 0)
			break;
		int a[n][3];
		fill(&dp[0][0], &dp[0][0] + n*3, LLONG_MAX);
		for(int i = 0; i < n; ++i)
			for(int j = 0; j < 3; ++j)
				cin >> a[i][j];
		dp[1][0] = a[1][0] + a[0][1];
		dp[1][1] = a[1][1] + a[0][1];
		dp[1][2] = a[1][2] + a[0][1];
		for(int i = 2; i < n; ++i)
			for(int j = 0; j < 3; ++j)
				for(int k = 0; k < 4; ++k) {
					int r = i + idx[k][0], c = j + idx[k][1];
					if(c >= 0 && r >= 0 && c < n && r < n)
						dp[i][j] = min(dp[i][j], dp[r][c] + a[i][j]);
				}
		cout << t++ << ". " << dp[n-1][1] << endl;

	}
	
	return 0;
}

