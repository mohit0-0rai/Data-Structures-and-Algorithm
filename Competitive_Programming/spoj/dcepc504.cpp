#include<bits/stdc++.h>
using namespace std;

long long min(long long a, long long b) { return (a<b) ? a : b; }
int main() {
	int t;
	scanf("%d", &t);
	while(t--) {
			int N; long long K;
			scanf("%d%lld", &N, &K);
			int count1s=0;
				--K;
				while(K>0) {
					if(K&1)
						++count1s;
					K >>= 1;
				}			
			if(count1s%2 == 0)
				printf("Male\n");
			else
				printf("Female\n");
	}

	return 0;
}
