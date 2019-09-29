#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;
#define mod 1000000007

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int n;
	ll moves = 0;
	cin >> n;
	vector<int> v(n);
	for(int i = 0; i < n; ++i)
		cin >> v[i];
	sort(v.begin(), v.end());
	for(int i = 0; i < n; ++i)
		moves += abs(i+1 - v[i]);
	cout << moves << endl;
	return 0;
}

