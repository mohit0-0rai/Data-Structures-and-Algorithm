#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;
#define mod 1000000007

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	string s;
	cin >> s;
	for(int i = 0; i < s.size(); ++i)
		if(s[i] == 'H' || s[i] == 'Q' || s[i] == '9' || s[i] == '+') {
			cout << "YES" << endl;
			return 0;
		}
	cout << "NO" << endl;
	return 0;
}

