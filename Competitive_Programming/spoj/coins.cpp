#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

unordered_map<int, ll> dp;

ll max(ll a, ll b) { return (a > b) ? a : b; }

ll solve(int n)
{
	ll ans;
	if(n == 0 || n == 1)
		return n;
	
	if(dp[n])
		return dp[n];
		
	ans = max(n, solve(n/4) + solve(n/3) + solve(n/2)); 
	dp[n] = ans;

	return dp[n];

}

int main() {
	
	//ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int n;

	while(scanf("%d", &n) == 1) {
		printf("%lld\n", solve(n));
	}

	return 0;
}
