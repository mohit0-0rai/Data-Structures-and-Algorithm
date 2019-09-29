#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;
#define mod 1000000007

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int n;
	ll ctr=0, cnt_neg=0, cnt_zero=0;
	cin >> n;
	
	for(int i = 0; i < n; ++i) {
		ll in;
		cin >> in;
		if(in < 0)
			++cnt_neg;
		else if(in == 0)
			++cnt_zero;
		if(in < -1)
			ctr = ctr - 1 - in;
		else if(in == 0)
			++ctr;
		else if(in > 1)
			ctr += in - 1;
	}
	if(!cnt_zero && cnt_neg & 1)
		ctr += 2;
		
	cout << ctr << endl;
	return 0;
}

