#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;
#define mod 1000000007

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int n, k, s, l, i;
	cin >> n;
	k = 2*n + 1;
	s = n; l = 0;
	while(k > 0) {
		for(i = 0; i < 2*s; ++i)
			cout << " ";
		for(i = 0; i <= l; ++i)
			cout << i << " ";
		for(int j = i-2; j >= 0; --j)
			cout << j << " ";
		--k;
		if(k > n) {
			--s; ++l;
		}
		else {
			++s; --l;
		}
		cout << endl;
	}
	return 0;
}

