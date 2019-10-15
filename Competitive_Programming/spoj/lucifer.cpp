#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;
#define MOD 1000000007

int dp[10][100];
bool isPrime[100];
string num;

int sol(int idx, int sum, bool edge) {
	if(idx == num.size()) {
		if(sum > 0)
			if(isPrime[sum] == 1)
				return 1;
		return 0;
	}

	if(!edge && dp[idx][sum] != -1)
		return dp[idx][sum];

	int k = edge ? num[idx] - '0' : 9, cnt = 0;

	for(int i = 0; i <= k; ++i) {
		bool newEdge = edge && num[idx] - '0' == i;
		if((num.size() - idx) & 1)
			cnt += sol(idx + 1, sum - i, newEdge);
		else
			cnt += sol(idx + 1, sum + i, newEdge);
	}
	
	return edge ? cnt : dp[idx][sum] = cnt;
}

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	vi prime({2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97});
	for(int i = 0; i < prime.size(); ++i)
		isPrime[prime[i]] = 1;
	int t;
	cin >> t;
	while(t--) {
		int a, b;
		cin >> a >> b;
		
		num = to_string(a-1);
		memset(dp, -1, sizeof(dp));
		int a1 = sol(0, 0, 1);

		num = to_string(b);
		memset(dp, -1, sizeof(dp));
		int a2 = sol(0, 0, 1);

		cout << (a2 - a1) << endl;

	}
	return 0;
}

