#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;
#define mod 1000000009

bool dp[1000001];


void pre_calc() {

	set<ll> pandatic({1, 4, 27, (int)pow(4,4), (int)pow(5,5), (int)pow(6,6), (int)pow(7,7), (int)pow(8,8), (int)pow(9,9)});
	dp[1] = 1;
	for(int i = 2; i <= 1000000; ++i)
	{
		if(pandatic.find(i) != pandatic.end()) {
			dp[i] = 1;
			continue;
		}
		int n = i;
		while(n > 0) {
			int dig = n % 10;
			n /= 10;
			int val = i - (int)pow(dig, 2);
			if(val > 0 && dp[val])
				dp[i] = dp[val];
		}
	}
}

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	pre_calc();
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		
		if(dp[n])
			cout << "Yes" << endl;
		else
			cout << "No" << endl;
	}
	
	return 0;
}

