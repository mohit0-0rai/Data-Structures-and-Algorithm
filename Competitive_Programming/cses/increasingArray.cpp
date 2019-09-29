#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;
#define mod 1000000007

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int n;
	ll tot = 0;
	cin >> n;
	vector<int> a(n);
	for(int i = 0; i < n; ++i)
		cin >> a[i];
	for(int i = 1; i < n; ++i) {
		if(a[i] < a[i-1]) {
			tot += a[i-1] - a[i];
			a[i] += a[i-1] - a[i];
		}
	}
	cout << tot << endl;
	return 0;
}

