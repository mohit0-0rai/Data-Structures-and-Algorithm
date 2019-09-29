#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;
#define mod 1000000007

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int n, xr = 0, in;
	cin >> n;
	for(int i = 1; i < n; ++i) {
		cin >> in;
		xr ^= (i ^ in);
	}
	cout << (xr ^ n) << endl;
	return 0;
}

