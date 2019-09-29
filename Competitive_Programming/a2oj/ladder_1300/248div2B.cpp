#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;
#define mod 1000000007

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int n, m;
	cin >> n;
	vector<int> v(n+1);
	vector<ll> pre(n+1, 0);
	vector<ll> pre_sorted(n+1, 0);
	for(int i = 1; i <= n; ++i)
		cin >> v[i];
	pre[0] = v[0];
	for(int i = 1; i <= n; ++i)
		pre[i] = pre[i-1] + v[i];
	sort(v.begin(), v.end());
	pre_sorted[0] = v[0];
	for(int i = 1; i <= n; ++i)
		pre_sorted[i] = pre_sorted[i-1] + v[i];
	cin >> m;
	while(m--) {
		int type, l, r;
		cin >> type >> l >> r;
		if(type == 1)
			cout << pre[r] - pre[l-1] << endl;
		else
			cout << pre_sorted[r] - pre_sorted[l-1] << endl;
	}

	return 0;
}

