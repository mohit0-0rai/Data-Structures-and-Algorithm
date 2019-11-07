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
	vector<int> a(n);
	for(int i = 0; i < n; ++i)
		cin >> a[i];
	
	// Kadane's Algorithm
	
	int maxEndingHere = 0, maxSoFar = INT_MIN, resLow = 0, resHigh = 0, s = 0;
	for(int i = 0; i < n; ++i) {
		maxEndingHere += a[i];
		if(maxEndingHere < a[i]) {
			maxEndingHere = a[i];
			s = i;
		}
		if(maxSoFar < maxEndingHere) {
			maxSoFar = maxEndingHere;
			resLow = s;
			resHigh = i;
		}
	}
	cout << "Maximum subarray sum is from index " << resLow << " to " << resHigh << " which is " << maxSoFar << endl;

	return 0;
}

