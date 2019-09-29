#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;
#define mod 1000000007

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int n, max = 1, curr = 1;
	string a, b, sum = "1";
	cin >> n;
	for(int i = 0; i < n; ++i) {
		cin >> a >> b;
		if(sum == a+b)
			++curr;
		else
			curr = 1;
		sum = a + b;
		if(max < curr)
			max = curr;
	}
	cout << max << endl;
	return 0;
}

