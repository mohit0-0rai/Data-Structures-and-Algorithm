#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;
#define mod 1000000007

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int n, max = 0, curr = 0, prev = -1, c1 = 0;
	cin >> n;
	for(int i = 0; i < n; ++i) {
		int a;
		cin >> a;
		if(prev == 0 && prev == a)
			++curr;
		else if(a == 1)
			++c1;
		else
			curr = 1;
		if(max < curr)
			max = curr;
		prev = a;
	}
	cout << max+c1 << endl;
	return 0;
}

