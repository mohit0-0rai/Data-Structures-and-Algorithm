#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;
#define mod 1000000009

int dp[1000001];

void pre_calc()
{
	dp[0] = 0;
	dp[1] = 1;
	dp[2] = 2;
	for(int i = 3; i < 1000001; ++i) {
		int even, odd;
		if(i % 2 == 0)
			even = odd = i/2;
		else {
			even = i / 2;
			odd = i / 2 + 1;
		}
		dp[i] = even * even * dp[even - 1] * dp[odd] + odd * odd * dp[odd - 1] * dp[even];
	}
}


int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int t;
	cin >> t;
	pre_calc();
	while(t--) {
		int n;
		cin >> n;
		cout << dp[n] << endl;
	}

	return 0;
}

