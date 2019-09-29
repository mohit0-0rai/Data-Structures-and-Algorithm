#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;
#define mod 1000000007

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	 int s, n;
	 cin >> s >> n;
	 vector<pii> v(n+1);
	 for(int i = 0; i < n; ++i)
		 cin >> v[i+1].first >> v[i+1].second;
	 v[0].first = v[0].second = 0;
	 sort(v.begin(), v.end(), [] (pii a, pii b) {
				return a.first < b.first;
			 });
	 for(int i = 1; i <= n; ++i) {
			if(v[i-1].second + s >	v[i].first) {
				s += v[i-1].second;
			}
			else {
				cout << "NO" << endl;
				return 0;
			}
	 }
	 cout << "YES" << endl;

	return 0;
}

