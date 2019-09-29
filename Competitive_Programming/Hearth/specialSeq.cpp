#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;
#define mod 1000000007

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int n, k;
	cin >> n >> k;
	vector<int> v(n), left(n, 0), right(n, 0);
	for(int i = 0; i < n; ++i)
		cin >> v[i];
	for(int i = 1; i < n; ++i) {
		int piv1 = v[0], piv2 = v[n-1];
		if(v[i] > piv1)
			++left[i];
		if(v[n-1-i] > piv2)
			++right[n-1-i];
	}
	for(int i = 0; i < n; ++i) {
		if(left[i] > k || right[i] > k)
			sum += v[i];
	}

	return 0;
}

