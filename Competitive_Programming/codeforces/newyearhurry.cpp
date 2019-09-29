#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;
#define mod 1000000007

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int N, K;
	cin >> N >> K;
	double des = 25 + 20*1.0*(480 - 2*K);
	int res = floor((-5 + sqrt(des)) / 10.0);
	if(res > N)
		cout << N << endl;
	else
		cout << res << endl;

	return 0;
}

