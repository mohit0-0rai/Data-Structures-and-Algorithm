#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;
#define mod 1000000007

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int t;
	ll res;
	cin >> t;
	while(t--) {
		ll y, x;
		cin >> y >> x;
		if(x > y) {
			if(x % 2)
				res = x*x - (y-1);
			else
				res = x*x - ((x-1) + (x-y));
		}
		else {
			if(x % 2)
				res = y*y - ((y-1) + (y-x));
			else
				res = y*y - (x-1);
		}
		cout << res << endl;
	}
	return 0;
}

