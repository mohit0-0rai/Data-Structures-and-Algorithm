#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;
#define MOD 1000000007

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int n;
	cin >> n;
	
	int a[n], sum[n] = {0};
	ll s=0, tot = 0, res = 0;
	bool cnt[n] = {0};
	for(int i = 0; i < n; ++i) {
		cin >> a[i];
		tot += a[i];
	}
	if(tot % 3 != 0 || n == 1 || n == 2) {
		cout << 0 << endl;
		return 0;
	}
	s = tot;
	s -= a[0]+a[1];
	for(int i = 2; i <= n-1; ++i) {
		if(s == tot/3)
			cnt[i] = 1;
		s -= a[i];
	}
	sum[n-1] = cnt[n-1];

	for(int i = n-2; i >= 2; --i) {
		sum[i] = cnt[i] + sum[i+1];
	}
	s = 0;
	for(int i = 0; i < n-2; ++i) {
		s += a[i];
		if(s == tot/3)
			res += sum[i+2];
	}
	cout << res << endl;
	return 0;
}

