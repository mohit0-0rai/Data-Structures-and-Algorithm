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
	if(int(s[0]) >= 97)
		s[0] = s[0] - 'a' + 'A';
	cout << s << endl;
	return 0;
}

