#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;
#define mod 1000000009

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
	int n, m;
	cin >> n >> m;

	string s[n];
	int ans_cnt[5];
	int points[m];

	for(int i = 0; i < n; ++i)
		cin >> s[i];
	for(int i = 0; i < m; ++i)
		cin >> points[i];

	int tot = 0, max_cnt;
	for(int i = 0; i < m; ++i) {
		memset(ans_cnt, 0, sizeof(ans_cnt));
		max_cnt = -1;
		for(int j = 0; j < n; ++j) {
			int temp = s[j][i] - 'A';
			++ans_cnt[temp];
			max_cnt = max(max_cnt, ans_cnt[temp]); 
		}
		tot += max_cnt * points[i];
	}

	cout << tot << endl;


	return 0;
}

