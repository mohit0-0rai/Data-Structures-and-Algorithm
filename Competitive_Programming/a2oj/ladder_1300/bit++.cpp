#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;
#define mod 1000000007

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int n, num = 0; string s;
	cin >> n;
	while(n--) {
		cin >> s;
		if(s[1] == '+')
			++num;
		else
			--num;
	}
	cout << num << endl;
	return 0;
}

