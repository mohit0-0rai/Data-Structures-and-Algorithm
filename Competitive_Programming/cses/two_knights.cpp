#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;
#define mod 1000000007

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int n;
	cin >> n;
	if(n == 1)
		cout << 0 << endl;
	else if(n >= 2) {
		cout << 0 << "\n" << 6 << endl;
	}
	for(int i = 3; i <= n; ++i)
		cout << (1LL*i*i*(i*i - 1)/2 - 1LL*4*(i-1)*(i-2)) << endl;
	return 0;
}
