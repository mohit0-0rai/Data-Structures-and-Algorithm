#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;
#define mod 1000000009

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int n;
	cin >> n;
	int in, m = -1; ll sum = 0;
	for(int i = 0; i < n; ++i) {
		cin >> in;
		sum += in;
		m = max(m, in);
	}

	if(sum % 2 == 0 && sum - m >= m)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;

	return 0;
}

