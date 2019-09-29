#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;
#define mod 1000000007

ll dp[5001][5001];

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int N, M;
	cin >> N >> M;
	vector<ll> bulls(N), cows(M);
	for(int i = 0; i < N; ++i)
		cin >> bulls[i];
	for(int i = 0; i < M; ++i)
		cin >> cows[i];
	sort(bulls.begin(), bulls.end());
	sort(cows.begin(), cows.end());
	for(int i = 1; i <= N; ++i) {
		for(int j = 0; j <= M; ++j)
			dp[i][j] = LLONG_MAX;
	}
	
	for(int i = 1; i <= N; ++i) {
		for(int j = 1; j <= M; ++j) {
			if(j >= i)
				dp[i][j] = min(dp[i-1][j-1] + abs(cows[j-1]-bulls[i-1]), dp[i][j-1]);
		}
	}
	
	/*for(int i = 1; i <= N; ++i) {
		for(int j = 1; j <= M; ++j) {
			cout << dp[i][j] << endl;
		}
		cout << endl;
	}*/
	cout << dp[N][M] << endl;

	return 0;
}

