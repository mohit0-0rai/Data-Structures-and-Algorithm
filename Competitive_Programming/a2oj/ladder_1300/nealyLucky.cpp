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
	int cnt = 0;
	for(int i =0; i < s.size(); ++i)
		if(s[i] == '4' || s[i] == '7')
			++cnt;
	if(cnt == 4 || cnt == 7)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;

	return 0;
}

