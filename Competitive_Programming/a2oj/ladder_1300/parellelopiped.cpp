#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;
#define mod 1000000007

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int a, b, c;
	cin >> a >> b >> c;
	double sum = sqrt(1.0 * a * b / c) + sqrt(1.0 * a * c / b) + sqrt(1.0 * b * c / a);
	cout << int(sum*4) << endl;
	return 0;
}

