#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;
#define mod 1000000007

void multiply(int a[2][2], int b[2][2]) {
	int c[2][2];
	for( int i = 0; i < 2; ++i)
		for(int j = 0; j < 2; ++j)
			for(int k = 0; k < 2; ++k)
				c[i][j] += a[i][k] * b[k][j];
	a = c;
}

void solve(int mat[2][2], ll n) {
	int res[2][2] = {1, 0, 0, 1};
	while(n > 0) {
		if(n & 1)
			multiply(res, mat);
		multiply(mat, mat);
		n >>= 1;
	}
	mat = res;
}

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	ll x, y, n;;
	cin >> x >> y >> n;
	int m[2][2] = {1, 1, -1, 0};
	if(n > 2) {
		solve(m, n-2);
		cout << ((((y % mod) * (m[0][0] % mod)) % mod + ((x % mod) * (m[1][0] % mod)) % mod) % mod + mod) % mod << endl;
	}
	else if(n == 2)
		cout << (y % mod + mod) % mod << endl;
	else
		cout << (x % mod + mod) % mod << endl;
	
	return 0;
}

