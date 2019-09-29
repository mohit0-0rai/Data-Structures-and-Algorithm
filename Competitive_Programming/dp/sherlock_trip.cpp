#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;
#define mod 1000000009


int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
	int t;
	cin >> t;
	while(t--) {
		ll a, l; int m;
		cin >> a >> l;
		cin >> m;
		vector<ll> pumps(m + 1);
		for(int i = 0; i < m; ++i)
			cin >> pumps[i];
		pumps.push_back(a);

		sort(pumps.begin(), pumps.end());
		ll dp[m + 1] = {0};
		for(int i = 0; i <= n; ++i) {
			for(int i = 0
		}
		
	}

	return 0;
}

