#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;
#define mod 1000000007

ll binpow(ll a, ll b) {
	ll res = 1;
	while(b > 0) {
		if(b & 1) res *= a;
		a *= a;
		b >>= 1;
	}
	return res;
}

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	cout << binpow(11,3) << endl;
	return 0;
}

