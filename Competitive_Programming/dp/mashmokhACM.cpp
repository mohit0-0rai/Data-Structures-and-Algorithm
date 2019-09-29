#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;
#define mod 1000000007

ll dp[2001][2001];

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int N, K;
	cin >> N >> K;
	for(int i = 1; i <= N; ++i)
		dp[1][i] = 1;
	ll res = 0;
	for(int k = 1; k < K; ++k) {
		for(int i = 1; i <= N; ++i) {
			for(int j = i; j <= N; j+=i) {
				dp[k+1][j] = (dp[k+1][j] % mod +  dp[k][i] % mod) % mod ;
			}
		}
	}
	for(int i = 1; i <= N; ++i) {
		res = (res + dp[K][i]) % mod;
	}
	
	cout << res << endl;

	return 0;
}

