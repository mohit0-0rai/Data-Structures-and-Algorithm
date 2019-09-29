#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;
#define mod 1000000007

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int n, max, min, a, cnt = 0;
	cin >> n;
	cin >> a;
	max = min = a;
	while(--n) {
		cin >> a;
		if(a > max) {
			++cnt;
			max = a;
		}
		else if(a < min) {
			++cnt;
			min = a;
		}
	}
	cout << cnt << endl;
	return 0;
}

