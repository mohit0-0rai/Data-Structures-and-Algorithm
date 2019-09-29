#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;
#define mod 1000000007

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int n, d;
	ll max = -1, sum=0;
	cin >> n >> d;
	vector<pii> v(n);
	for(int i = 0; i < n; ++i)
		cin >> v[i].first >> v[i].second;
	sort(v.begin(), v.end());
	for(int i = 0, j = 0; i < n;) {
		while(j < n && v[j].first - v[i].first < d) {
			sum += v[j].second;
			++j;
		}
		if(max < sum)
			max = sum;

			sum -= v[i].second;
			++i;
	}
	cout << max << endl;
	return 0;
}

