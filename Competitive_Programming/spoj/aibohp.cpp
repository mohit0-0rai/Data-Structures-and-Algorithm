#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;
#define mod 1000000007

int dp[6101][6101];

int min(const int& a, const int& b) { return a<b?a:b; }

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int t;
	cin >> t;
	
	while(t--) {
		string s;
		cin >> s;
		int n = s.size();
		if(n == 1) {
			cout << n << endl;
			continue;
		}
		memset(dp, 0, sizeof(dp));
		for(int gap = 1; gap < n; ++gap) {
			for(int i = 0, j = gap; j < n; ++i, ++j) {
				if(s[i] == s[j])
					dp[i][j] = dp[i+1][j-1];
				else 
					dp[i][j] = min(dp[i+1][j], dp[i][j-1]) + 1;
			}
		}
	
		cout << dp[0][n-1] << endl;
	}
	
	return 0;
}

