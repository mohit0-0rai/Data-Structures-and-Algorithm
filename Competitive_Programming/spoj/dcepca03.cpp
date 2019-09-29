#include<bits/stdc++.h>
using namespace std;

long long phi(int n)
{
	float res = n;
	for(int p=2; p*p <= n; p++) {
		if(n % p == 0) {
			res *= 1.0 - (1.0 / (float)p);
			while(n % p == 0)
				n /= p;
		}
	}
	if(n>1)
		res *= 1.0-(1.0/(float)n);

	return (int)res;
}

int main() {
	int t;
	scanf("%d", &t);
	while(t--) {
		int N;
		scanf("%d", &N);
		long long sum = 1;
		for(int i=2; i<=N; i++)
			sum += phi(i);
		
		printf("%lld\n", (long long)(pow(sum, 2)+0.5));
	}

	return 0;
}
