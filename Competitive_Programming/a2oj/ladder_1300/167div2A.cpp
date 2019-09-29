#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;
#define mod 1000000007

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int n, in, sum = 0, ways=0;
	cin >> n;
	for(int i = 0; i < n; ++i) {
		cin >> in;
		sum += in;
	}
	for(int i = 1; i <= 5; ++i) {
		if((sum + i) % (n+1) != 1)
			++ways;
	}
	cout << ways << endl;
	return 0;
}

