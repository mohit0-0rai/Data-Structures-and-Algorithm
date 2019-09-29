#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;
#define mod 1000000007

ll c[3];
int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int t;
	cin >> t;
	while(t--) {
		ll a, b, n;
		cin >> a >> b >> n;
		c[0] = a; c[1] = b; c[2] = a^b;
		cout << c[n%3] << endl;
	}
	return 0;
}

