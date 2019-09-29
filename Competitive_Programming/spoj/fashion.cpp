#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;
#define mod 1000000009

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int t = 0;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		if(n > 0) {
		vi men(n);
		vi women(n);
		for(int i = 0; i < n; ++i) {
			cin >> men[i];
		}
		for(int i = 0; i < n; ++i) {
			cin >> women[i];
		}
		int sum = 0;
		sort(men.begin(), men.end());
		sort(women.begin(), women.end());
		for(int i = 0; i < n; ++i) {
			sum += men[i]*women[i];
		}
		cout << sum << endl;
		}
		else
			cout << 0 << endl;
	}
	return 0;
}

