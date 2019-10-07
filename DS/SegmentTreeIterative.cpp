#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;
#define mod 1000000007

const int N = 1e5;
int n;
int t[2*N];

void build() {
	for(int i = n-1; i > 0; --i)
		t[i] = min(t[i << 1], t[i << 1 | 1]);
}

void update(int pos, int val) {
	t[pos += n] = val;
	for(; pos > 1; pos >>= 1)
		t[pos >> 1] = min(t[pos], t[pos^1]);
}
int query(int l, int r) {
	int m = INT_MAX;
	for(l += n, r += n; l < r; l >>= 1, r >>= 1) {
		if(l&1) m = min(m, t[l++]);
		if(r&1) m = min(m, t[--r]);
	}
	return m;
}

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	cin >> n;
	for(int i = 0; i < n; ++i)
		cin >> t[n+i];
	build();

	return 0;
}

