#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;
#define mod 1000000007

ll calc_pow(ll n) {
	ll temp = 2, res = 1;
	while(n > 0) {
		if(n & 1)
			res = ((res % mod) * (temp % mod)) % mod;
		temp = (temp * temp) % mod;
		n >>= 1;
	}
	return res;
}

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	ll n;
	cin >> n;
	cout << calc_pow(n) << endl;
	return 0;
}

