#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;
#define mod 1000000007

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int t, a, b;
	cin >> t;
	while(t--) {
		cin >> a >> b;
		if(a > b)
			swap(a, b);
		if(b <= 2*a && (a+b) % 3 == 0)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
	return 0;
}

