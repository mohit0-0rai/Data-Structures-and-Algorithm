#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;
#define mod 1000000007

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	string s, base = "0hello";
	cin >> s;
	for(int i = 0, j = 0; j < 5, i < s.size(); ++i) {
		if(s[i] == base[j]) {
			++j;
		}
		else if(s[i] == base[j-1])
			continue;
		else if(s[i] != base[j] && s[i-1] == base[j-1]) {
			cout << "NO" << endl;
			return 0;
		}
		}
		cout << "YES" << endl;
			
	return 0;
}

