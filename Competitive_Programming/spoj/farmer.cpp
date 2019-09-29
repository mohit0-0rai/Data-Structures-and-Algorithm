#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;
#define mod 1000000009

int knap01(int Q, vi& fields) {
	int	n = fields.size();
	vector<vi> dp(n+1, vi(Q+1));

	for(int i = 0; i <= n; ++i) {
		for(int q = 0; q <= Q; ++q) {
			if(i == 0 || q == 0) {
				dp[i][q] = 0;
			}
			else if(fields[i-1] <= q)
				dp[i][q] = max(dp[i-1][q], fields[i-1] + dp[i-1][q-fields[i-1]]);
			else
				dp[i][q] = dp[i-1][q];
		}
	}
	return dp[n][Q];
}

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int t = 0;
	cin >> t;
	while(t--) {
		int q, m, k, olive = 0, fields_sum = 0;
		cin >> q >> m >> k;
		if(q > 0)
		{
				vi fields(m);
			if(m > 0) {
				for(int i = 0; i < m; ++i) {
					cin >> fields[i];
					fields_sum += fields[i];
				}

			}
				vi strips(k);
			if(k > 0) {
				for(int i = 0; i < k; ++i) {
					cin >> strips[i];
				}
				sort(strips.begin(), strips.end(), greater<int>());
			}
		int rem = q;
		if(m > 0) {
		if(fields_sum < rem) {
			rem -= fields_sum;
			olive += fields_sum;
		}
		else {
			rem -= knap01(q, fields);
			olive += q - rem;
		}
		}
		if(k > 0)
		{
			for(int i = 0; i < k && rem > 0; ++i) {
				if(strips[i] <= rem)
				{
					rem -= strips[i];
					olive += strips[i] - 1;
				}
				else {
					olive += rem - 1;
					rem = 0;
				}
			}
		}
		}
		cout << olive << endl;
	}
	return 0;
}

