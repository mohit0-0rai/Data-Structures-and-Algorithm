#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;
#define MOD 1000000007

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int n;
	cin >> n;
	vector<int> a(n), pre(n);
	pre[0] = a[0];
	for(int i = 0; i < n; ++i)
		cin >> a[i];
	for(int i = 1; i < n; ++i) {
		pre[i] = pre[i-1] + a[i];
	}
	int minPreSum = pre[0], maxSubSum = INT_MIN;
	for(int i = 1; i < n; ++i) {
		if(maxSubSum < pre[i] - minPreSum)
			maxSubSum = pre[i] - minPreSum;
		if(minPreSum > pre[i])
			minPreSum = pre[i];
	}
	cout << maxSubSum << endl;

	return 0;

}

