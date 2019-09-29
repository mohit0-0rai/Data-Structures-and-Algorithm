#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;
#define mod 1000000007

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int n;
	cin >> n;
	int a, b, c, sum1 = 0, sum2 = 0, sum3 = 0;
	while(n--) {
		cin >> a >> b >> c;
		sum1 += a;
		sum2 += b;
		sum3 += c;
	}
	if(!sum1 && !sum2 && !sum3)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
	return 0;
}

