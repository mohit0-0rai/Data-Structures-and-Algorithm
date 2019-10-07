#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;
#define MOD 1000000007

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int min, n, s[4] = {0, 0, 0, 0};
	cin >> n;
	for(int i = 0; i < n; ++i) {
		int in, idx;
		cin >> in;
		min = (s[0] & in);
		for(int j = 1; j < 4; ++j) {
			if(in != s[j])
				if(min > (in & s[j])) {
					min = (in & s[j]);
					idx = j;
				}
		}
		s[idx] ^= in;
	}
	cout << s[0]+s[1]+s[2]+s[3] << endl;
	return 0;
}

