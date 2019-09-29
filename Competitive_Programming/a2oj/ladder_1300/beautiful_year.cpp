#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;
#define mod 1000000007

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int n, t;
	bool req;
	cin >> n;
	vector<bool> a(10, 0);
	while(true) {
		t = n+1;
		req = 1;
		fill(a.begin(), a.end(), 0);
		while(t > 0) {
			int rem = t % 10;
			if(a[rem]) {
				req = 0;
				++n;
				break;
			}
			a[rem] = 1;
			t /= 10;
		}
		if(req)
			break;
	}
	cout << n+1 << endl;
	return 0;
}

