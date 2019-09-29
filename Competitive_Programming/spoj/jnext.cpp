#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;
#define mod 1000000007

void swap(char& a, char& b) {
	int temp = a;
	a = b;
	b = temp;
}

void reverse(vector<char>& s, int l, int r) {
	while(l < r) {
		swap(s[l++], s[r--]);
	}
}


int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int t, ans;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		ans = -1;
		vector<char> s(n);
		for(int i = 0; i < n; ++i)
			cin >> s[i];
		if(n > 1) {
		int i;
		for(i = n-1; i > 0; --i) {
			if(s[i] > s[i-1])
				break;
		}
		if(i > 0) {
		int idx = upper_bound(s.begin()+i, s.end(), s[i-1], greater<int>()) - s.begin();
		swap(s[idx-1], s[i-1]);
		reverse(s, i, n-1);
		string res(s.begin(), s.end());
		ans = stoi(res);
		}
		}
		cout << ans << endl;
	}
	return 0;
}

