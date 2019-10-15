#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;
#define MOD 1000000007

int extGcd(int a, int b, int& x, int& y) {
	if(a == 0) {
		x = 0;
		y = 1;
		return b;
	}
	int x1, y1;
	int d = extGcd(b%a, a, x1, y1);
	x = y1 - (b / a) * x1;
	y = x1;
	return d;
}

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int a, b, x, y;
	cin >> a >> b;
	cout << "GCD : " << extGcd(a, b, x, y) << " x : " << x << " y : " << y << endl;
	return 0;
}

