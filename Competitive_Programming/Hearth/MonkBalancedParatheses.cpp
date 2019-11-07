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
	vector<int> a(n+1); int maxLen = 0, marker = 0, curr;
	for(int i = 1; i <= n; ++i)
		cin >> a[i];
	stack<int> s; s.push(0);
	for(int i = 1; i <= n; ++i) {
		if(a[i] > 0)
			s.push(i);
		else if(a[i] < 0) {
			if(s.top() == marker) {
				marker = i;
				s.push(i);
			}
			else {
				curr = s.top(); s.pop();
				if(a[curr] + a[i] == 0)
					if(maxLen < i - curr + 1)
						maxLen = i - curr + 1;
				else {
					marker = i;
					s.push(i);
				}
			}
		}
	}
	cout << maxLen << endl;
	return 0;
}

