#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;
#define mod 1000000007

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int n, cnt = 0;
	bool left, right, up, down;
	cin >> n;
	vector<pii> v(n);
	for(int i = 0; i < n; ++i)
		cin >> v[i].first >> v[i].second;
	for(int i = 0; i < n; ++i) {
		left = right = up = down = false;
		for(int j = 0; j < n; ++j) {
			if(i == j)
				continue;
			if(v[i].first == v[j].first) {
				if(v[i].second > v[j].second)
					up = true;
				else if(v[i].second < v[j].second)
					down = true;
			}
			else if(v[i].second == v[j].second) {
				if(v[i].first > v[j].first)
					left = true;
				else if(v[i].first < v[j].first)
					right = true;
			}
				
		}
		if(left && right && up && down)
			++cnt;
	}
	cout << cnt << endl;
	return 0;
}

