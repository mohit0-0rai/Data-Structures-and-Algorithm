#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;
#define mod 1000000007

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int n, val;
	cin >> n;
	val = n - 10;
	if(val <= 0 || val >= 12)
		cout << 0 << endl;
	else if(val >= 2 && val <= 9)
		cout << 4 << endl;
	else if(val == 10)
		cout << 15 << endl;
	else
		cout << 4 << endl;
	return 0;
}

