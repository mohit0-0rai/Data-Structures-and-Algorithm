#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;
#define MOD 1000000007

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int n, low = 0, high = 1, len = 1;
	cin >> n;
	vi a(n);
	for(int i = 0; i < n; ++i)
		cin >> a[i];
	for(int i = 0; i < n-1; ++i) {
		if(a[i+1] >= a[i])
			++high;
		else {
			low = i+1;
			high = i+2;
		}
		if(len < high - low)
			len = high - low;
	}
	cout << len << endl;
	return 0;
}

