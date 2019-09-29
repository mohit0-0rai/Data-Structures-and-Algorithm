#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;
#define mod 1000000009

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	while(true) {
		ll n = 0; int cnt = 0;
		cin >> n;
		if(n == 0)
			break;

		while(n % 2 == 0) {
			n >>= 1;
			cnt++;
		}
		if(cnt)
			cout << 2 << "^" << cnt << " " << flush;

		for(ll i = 3; i * i <= n; i += 2) {
			cnt = 0;
			while(n % i == 0) {
				++cnt;
				n /= i;
			}
			if(cnt)
				cout << i << "^" << cnt << " " << flush;
		}
			if(n > 2)
				cout << n << "^" <<	1 << flush;
		cout << endl;
	}

	return 0;
}

