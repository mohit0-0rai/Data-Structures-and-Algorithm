#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;
#define mod 1000000007

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int n, m, max = 0, i = 0, idx = -1;
	cin >> n >> m;
	while(i < n) {
		int in;
		cin >> in;
		if(ceil(in*1.0/m) >= ceil(max*1.0/m))
		{
			max = in;
			idx = i;
		}
		++i;
	}
	cout << idx+1 << endl;
	return 0;
}

