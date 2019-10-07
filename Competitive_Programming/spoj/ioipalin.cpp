#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;
#define MOD 1000000007

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int n; string str;
	cin >> n >> str;
	int dp[n][n];
	for(int sp = 0; sp < n; ++sp) {
		for(int i = 0, j = sp; j < n; ++j, ++i) {
			if(sp == 0)
				dp[i][j] = 0;
			else if(sp == 1) {
				if(str[i] == str[j])
					dp[i][j] = 0;
				else
					dp[i][j] = 1;
			}
			else {
				if(str[i] == str[j])
					dp[i][j] = dp[i+1][j-1];
				else
					dp[i][j] = min(dp[i+1][j], dp[i][j-1]) + 1;
			}
		}
	}
	cout << dp[0][n-1] << endl;
	return 0;
}

