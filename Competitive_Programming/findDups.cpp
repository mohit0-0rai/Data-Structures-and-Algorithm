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
	vector<int> a(n);

	for(int i = 0; i < n; ++i) 
		cin >> a[i];
	for(int i = 0; i < n; ++i) {
		if(a[abs(a[i])] >= 0)
			a[abs(a[i])] = -a[abs(a[i])];
		else
			cout << abs(a[i]) << " ";
	}

	cout << endl;
	return 0;
}

