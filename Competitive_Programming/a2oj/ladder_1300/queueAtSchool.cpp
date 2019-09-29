#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;
#define mod 1000000007

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int n, t;
	cin >> n >> t;
	string a;
	cin >> a;
	for(int i = 0; i < t; ++i) {
		for(int j = 0; j < n;) {
			if(a[j] == 'B' && a[j+1] == 'G') {
				swap(a[j], a[j+1]);
				j += 2;
			}
			else
				++j;
		}
	}
	cout << a << endl;
	return 0;
}

