#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;
#define mod 1000000007

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int n, i = 1, sum = 0;
	cin >> n;
	while(n/pow(5, i)) {
		sum += n/pow(5,i);
		++i;
	}
	cout << sum << endl;
	return 0;
}

