#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;
#define mod 1000000009

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int n;
	string s;
	cin >> n >> s;

	int res[10];
	memset(res, 0, sizeof(res));
	stack<int> lst, rst;
	lst.push(0);
	rst.push(9);
	for(int i = 0; i < n; ++i) {
		if(s[i] == 'L') {
			int t = lst.top();
			res[t] = 1;
			lst.pop();
			lst.push(t+1);
		}
		else if(s[i] == 'R') {
			int t = rst.top();
			res[t] = 1;
			rst.pop();
			rst.push(t-1);
		}
		else {
			int temp = s[i] - '0';
			if(temp < lst.top()) {
				lst.push(temp);
				res[temp] = 0;
			}
			else if(temp > rst.top()){
				rst.push(temp);
				res[temp] = 0;
			}
		}
	}

	for(int i =0; i < 10; ++i) {
		cout << res[i];
	}

	return 0;
}

