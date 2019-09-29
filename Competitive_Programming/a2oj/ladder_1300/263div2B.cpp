#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;
#define mod 1000000007

int cache[26];

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int n, k;
	string in;
	cin >> n >> k >> in;
	for(int c : in)
		++cache[c-'A'];
	sort(cache, cache+26, greater<int>());
	int i = 0; ll res = 0;
	while(k > 0) {
		if(k > cache[i]) {
			res += cache[i] * 1LL * cache[i];
			k = k - cache[i];
			++i;
		}
		else {
			res += k * 1LL * k;
			k = 0;
		}
	}
	cout << res << endl;
	return 0;
}

