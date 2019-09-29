#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;
#define mod 1000000007

class segtree {
	vector<int> tree;

	segtree(int n) : tree(n+1, 1) { }

	void update(int i, int val) {
		++i;
		int prev = i;
		for(; i <= n; i += i&(-i))
			tree[i] = max(tree[i], val);
	}

	int get(int i) {
		++i;
		int m;
		for(; i > 0; i -= i&(-i))
			m = max(m, tree[i]);
	}
}

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int n;
	cin >> n;
	vector<int> a(n);
	for(int i = 0; i < n; ++i) {
		cin >> a[i];
	}
	segtree s(a);
	return 0;
}

