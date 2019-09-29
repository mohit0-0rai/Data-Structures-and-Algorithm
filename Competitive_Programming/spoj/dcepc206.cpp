#include<bits/stdc++.h>
using namespace std;

int main() {
	
	int t;
	scanf("%d", &t);
	while(t--) {
		int N;
		scanf("%d", &N);
		vector<int> in(N);
		for(int i=0; i<N; i++)
			scanf("%d", &in[i]);
		vector<int> st(N+1,0);
		int idx;
		for(int i=1; i<=N; i++) {					//Initialize BIT
			idx = i;
			while(idx <= N) {
				if(idx > 1 && arr[i-1] < arr[idx-1])
					st[idx] += arr[i-1];
				idx += idx&(-idx);
			}
		}
		long long outer_sum = 0;
		for(int i=2; i<=N; i++) {
			idx = i;
			long long in_sum =0;
			while(idx > 0) {									//Find the sum till ith element of the array and then add them
				in_sum += st[idx];
			}
			outer_sum += in_sum;
		}
		printf("%lld\n", sum);
	}

	return 0;
}
