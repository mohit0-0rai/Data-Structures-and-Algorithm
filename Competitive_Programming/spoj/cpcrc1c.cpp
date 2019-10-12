#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;
#define MOD 1000000007

ll dp[20][2][180];

int calcDigits(ll num, vi& dig) {
	while(num) {
		dig.push_back(num % 10);
		num /= 10;
	}
	return dig.size();
}

ll calcDigSum(int idx, bool edge, ll sum, vi dig) {
	
	if(idx <= -1)
		return sum;

	if(dp[idx][edge][sum] != -1 && !edge)
		return dp[idx][edge][sum];
		
	ll ret = 0;

	int k = (edge) ? dig[idx] : 9;

	for(int i = 0; i <= k; ++i) {
		bool newEdge = edge && (dig[idx] == i);
		ret += calcDigSum(idx-1, newEdge, sum + i, dig);
	}
	if(!edge)
		dp[idx][edge][sum] = ret;

	return ret;
}

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	ll a, b;
	while(true) {
		cin >> a >> b;
		if(a == -1 && b == -1)
			break;
		memset(&dp[0][0][0], -1, sizeof(dp));
		vi dig1, dig2;
		int l1 = calcDigits(b, dig1), l2 = calcDigits(a-1, dig2);
		cout << (calcDigSum(l1 - 1, 1, 0, dig1) - calcDigSum(l2 - 1, 1, 0, dig2)) << endl;
	}
	return 0;
}

