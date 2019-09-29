#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;
#define mod 1000000009

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
	int n, k;
	cin >> n >> k;
	vector<int> in(n);
	
	for(int i = 0; i < n; ++i)
		cin >> in[i];
	sort(in.begin(), in.end());
	int cnt = 1;
	ll ans = in[n/2], temp;
	for(int i = n/2; i < n-1; ++i) {
		temp = ((ll)in[i+1] - in[i]) * cnt;
		if(temp <= k) {
			k -= temp;
			ans = in[i+1];
			++cnt;
		}
		else
			break;
	}

	ans += k/cnt;
	
	cout << ans << endl;
	return 0;
}

