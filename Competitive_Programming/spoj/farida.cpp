#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;
#define mod 1000000009

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
	int t, i=0;
	cin >> t;
	while(i++ < t) {
		int n;
		cin >> n;
		if(n > 0) {
		vector<ll> v(n);
		for(int i = 0; i < n; ++i) {
			cin >> v[i];
		}
		ll curr = v[0];
		if(n > 1) {
			ll prev2 = 0, prev1 = v[0];
			for(int i = 1; i < n; ++i) {
				curr = max(v[i] + prev2, prev1);
				prev2 = prev1;
				prev1 = curr;
			}
		}
		cout << "Case " << i << ": " << curr << endl;
		}
		else
			cout << "Case " << i << ": " << 0 << endl;
	}
	return 0;
}

