#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;
#define mod 1000000007

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	long long n;
	cin >> n;
	while(true) {
		cout << n << " ";
		if(n == 1)
			break;
		if(n % 2)
			n = n * 3 + 1;
		else
			n /= 2;
	}
	return 0;
}

