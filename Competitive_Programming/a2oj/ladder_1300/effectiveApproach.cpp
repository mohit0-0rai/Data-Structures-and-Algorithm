#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;
#define mod 1000000007

pii cache[100001];
int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int n, q; ll sumV = 0, sumP = 0;
	cin >> n;
	for(int i = 0; i < n; ++i) {
		int in;
		cin >> in;
		cache[in].first = i+1;
		cache[in].second = n-i;
	}
	cin >> q;
	while(q--) {
		int query;
		cin >> query;
		sumV += cache[query].first;
		sumP += cache[query].second;
	}
	cout << sumV << " " << sumP << endl;
	return 0;
}

