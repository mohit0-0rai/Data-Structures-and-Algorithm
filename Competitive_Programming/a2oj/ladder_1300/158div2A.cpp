#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;
#define mod 1000000007

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int a, b, n;
	string num;
	cin >> a >> b >> n;
	num = to_string(a);
	for(int i = 0; i <= 9; ++i) {
		if((a * 10 + i) % b == 0) {
			num = num + to_string(i);
			break;
		}
	}
	if(stoi(num) == a)
		cout << -1 << endl;
	else {
		cout << num.append(n-1, '0') << endl;
	}
	return 0;
}

