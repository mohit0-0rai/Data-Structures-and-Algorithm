#include<bits/stdc++.h>
using namespace std;

void simpleSieve(int limit, vector<int>& prime)
{
	bool mark[limit+1];
	memset(mark, false, sizeof(mark));
	for(int i=2; i <= limit; i++) {
		if(!mark[i]) {
			prime.push_back(i);
			for(int j=i; j <= limit; j+=i)
				mark[j] = true;
		}
	}
}

int main() {
		ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
		int t;
		cin >> t;
		while(t--) {
			int low, high;
			vector<int> prime;
			cin >> low >> high;

			simpleSieve(floor(sqrt(high))+1, prime);

			int n = high - low + 1;
			vector<bool> mark(n, false);
			
			for(int i = 0; i < prime.size(); ++i) {
				int lowlim = floor(low / prime[i]) * prime[i];
				if(lowlim < low)
					lowlim += prime[i];
				if(lowlim == prime[i])
					lowlim += prime[i];
				for(int j=lowlim; j <= high; j += prime[i]) {
					mark[j-low] = true;
				}
			}
			for(int i = max(2,low); i <= high; ++i)
				if(!mark[i-low])
					cout << i << endl;
		}

		return 0;
}
