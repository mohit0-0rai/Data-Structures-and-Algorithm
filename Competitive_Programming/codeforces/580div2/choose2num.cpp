#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;
#define mod 1000000007

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int m, n, max1 = -1, max2 = -1;
	cin >> n;
	for(int i = 0; i < n; ++i) {
		int a;
		cin >> a;
		if(max1 < a)
			max1 = a;
	}
	cin >> m;
	for(int i = 0; i < m; ++i) {
		int a;
		cin >> a;
		if(max2 < a)
			max2 = a;
	}

	cout << max1 << " " << max2 << endl; 
	return 0;
}

