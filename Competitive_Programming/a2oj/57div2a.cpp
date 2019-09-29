#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;
#define mod 1000000007

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	string a, b;
	cin >> a >> b;
	for(int i = 0; i < a.size(); ++i) {
		if(a[i] != b[i])
			cout << 1;
		else cout << 0;
	}
	return 0;
}

