#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;
#define MOD 1000000007

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		if(n == 1) {
			cout << 0 << endl;
			return 0;
		}
		vector<ll> a(n);
		vi r(n);
		set<ll> s;
		for(int i = 0; i < n; ++i)
			cin >> a[i];
		int m = -1, sum = 0;
		for(int i = n-1; i >= 0; --i) {
			s.insert(a[i]);
			r[i] = distance(s.begin(), s.lower_bound(a[i]));
			cout << a[i] << " : " << r[i] << endl;
			if(m < r[i])
				m = r[i];
			sum += r[i];
		}
		cout << (sum - m) << endl;
	}
	return 0;
}

