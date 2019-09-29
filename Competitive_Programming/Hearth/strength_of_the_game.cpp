#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;
#define mod 1000000009

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int n, m;
	cin >> n >> m;
	vector<int> s(n);
	int max = INT_MIN;
	for(int i =0; i < n; ++i) {
		cin >> s[i];
		if(max < s[i])
			max = s[i];
	}
	int dp[n+1][1 << ((int)log2(max) + 1)] {0};
	

	
	return 0;
}

