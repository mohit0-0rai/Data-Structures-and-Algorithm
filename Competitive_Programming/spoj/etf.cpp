#include<bits/stdc++.h>
using namespace std;


vector<int> p;
const int MAX = 1000000;

void simple_sieve()
{
	bool mark[MAX+1];
	memset(mark, false, sizeof(mark));
	for(long long i=2; i <= MAX; ++i){
		if(!mark[i]) {
				p.push_back(i);
				for(long long j = 2; i * j <= MAX; j += i)
					mark[i * j] = true;
		}
	}
}
int phi(int n)
{
	int res = n;
	for(int i = 0; p[i]*p[i] <= n; ++i) {			// runs O(sqrt(N/lgN))
		if(n % p[i] == 0) {
			res -= (res / p[i]);
			while(n % p[i] == 0)
				n /= p[i];
		}
	}
	if(n>1)
		res -= (res / n);
	
	return res;
}

int main()
{
	int t;
	cin >> t;
	simple_sieve();
	while(t--) {
		int n;
		cin >> n;
		cout << phi(n) << "\n";
		
	}
	return 0;
}
