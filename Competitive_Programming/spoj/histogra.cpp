#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;
#define MOD 1000000007

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int n = 0;
	while(true) {
		cin >> n; int cnt = 1, low = 0;

		if(n == 0)
			break;
		vi a(n);
		for(int i = 0; i < n; ++i)
			cin >> a[i];
		
		ll opt = a[0]; 
		for(int i = 0; i < n-1; ++i) {
			if(a[i+1] >= a[i]) {
				if((cnt + 1) * a[low] > a[i+1])
					++cnt;
				else
					low = i+1;
			}
			else {
				cnt = 1;
				low = i+1;
			}
			if(cnt*a[low] > opt)
				opt = cnt*a[low];
//			cout << opt << endl;
		}
		cout << opt << endl;
	}
	return 0;
}

