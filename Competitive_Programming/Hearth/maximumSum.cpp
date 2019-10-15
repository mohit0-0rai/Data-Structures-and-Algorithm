#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;
#define MOD 1000000007

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int n, m, t;
	cin >> t;
	while(t--) {
		cin >> n >> m;
		int h = m/2;
		int f[n][h], s[n][h];
		for(int i = 0; i < n; ++i) {
			for(int j = 0; j < h; ++j)
				cin >> f[i][j];
			for(int j = 0; j < h; ++j)
				cin >> s[i][j];
		}
		for(int i = 0; i < n; ++i) {
			sort(&f[i][0], &f[i][h]);
			sort(&s[i][0], &s[i][h], greater<int>());
		}
		int sum = 0, m = -1;
		bool odd;
		for(int i = 0; i < n; ++i) {
			odd = i & 1;
			if(odd == 0)
				sum += f[i][h-1];
			else
				sum += s[i][0];
		}
		m = max(m, sum); sum = 0;
		for(int i = 0; i < n; ++i) {
			odd = i & 1;
			if(odd == 1)
				sum += f[i][h-1];
			else
				sum += s[i][0];
		}
		m = max(m, sum);
	cout << m << endl;
	}

	return 0;
}

