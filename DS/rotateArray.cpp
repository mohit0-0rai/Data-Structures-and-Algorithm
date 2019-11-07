#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;
#define MOD 1000000007

// Rotate array to the right by k elements

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int n, k;
	cin >> n >> k;
	k %= n;
	vector<int> a(n);
	for(int i = 0; i < n; ++i)
		cin >> a[i];

	for(int i = 0; i < n; ++i)
		cout << a[(i + n - k) % n] << " ";
	cout << endl;		
	return 0;
}

