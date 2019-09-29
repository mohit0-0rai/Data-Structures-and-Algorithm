#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;
#define mod 1000000007

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int n, k, l, q;
	string s, t, in;
	cin >> n >> k >> l >> q;
	unordered_map<string, string> m;
	for(int i = 0; i < n; ++i) {
		cin >> s;
		t = "";
		for(int j = 0; j < k; ++j) {
			cin >> in;
			t += in;
		}
		cout << t << endl;
		m[t] = s;
	}
	while(q--) {
		t = "";
		for(int i = 0; i < k; ++i) {
		cin >> in;
		t += in;
		}
		if(m.find(t) != m.end())
			cout << m[t] << endl;
		else
			cout << "You cant fool me :P" << endl;
	}
	return 0;
}

