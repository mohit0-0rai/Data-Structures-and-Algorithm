#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;
#define mod 1000000007

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int n;
	cin >> n;
	if(n == 1)
		cout << 1 << endl;
	else if( n == 3 || n == 2)
		cout << "NO SOLUTION" << endl;
	else {
		for(int i = 2; i <= n; i += 2)
			cout << i << " ";
		for(int i = 1; i <= n; i += 2)
			cout << i << " ";
		}
	return 0;
}

