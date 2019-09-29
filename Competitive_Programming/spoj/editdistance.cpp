#include<bits/stdc++.h>
using namespace std;
typedef vector<int> vi;

int min(int a, int b) { return (a < b) ? a : b; }

int main()
{
	int t;
	scanf("%d", &t);
	while(t--) {
		char s1[3000], s2[3000];
		scanf("%s%s", s1, s2);
		int n = strlen(s1), m = strlen(s2);
		vector<vi> dp(n+1, vi(m+1));
		for(int i=0; i <= n; i++)
			dp[i][0] = i;
		for(int j=1; j <= m; j++)
			dp[0][j] = j;
		for(int i=1; i <= n; i++) {			
			for(int j=1; j <= m; j++)
				dp[i][j] = (s1[i-1] == s2[j-1]) ? dp[i-1][j-1] : 1 + min(dp[i][j-1], min(dp[i-1][j], dp[i-1][j-1]));			//**// here [i][j-1], [i-1][j], [i-1][j-1] =====> insert, delete, replace
		}
		printf("%d\n", dp[n][m]);
	}

	return 0;
}
