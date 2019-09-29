#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;
#define mod 1000000007

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	string s, res;
	int cache[4] = {0, 0, 0, 0};
	cin >> s;
	for(int i = 0; i < s.size(); i += 2)
			cache[s[i] - '0']++;
	for(int i = 1; i <= 3; ++i) {
		while(cache[i]--) {
			res.push_back(i + '0');
			res.push_back('+');
		}
	}
	res.pop_back();
	cout << res << endl;
	return 0;
}

