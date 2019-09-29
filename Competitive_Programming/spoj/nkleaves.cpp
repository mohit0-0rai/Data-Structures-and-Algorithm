#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;
#define mod 1000000009

int wt[100001];
ll s[100001];
ll dp[11][100001];

ll max(ll a, ll b) { return a>b?a:b;}

struct line {
	ll m, c;
	ll eval(ll x) { return m * x + c; }
	ll intersectX(line l) { return (l.c - c) / (m - l.m); } 
};

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int N, K;
	cin >> N >> K;
	ll tot_cost = 0, sum=0;
	for(int i=1; i <= N; ++i) {
		cin >> wt[i];
		sum += wt[i];
	}
	s[N] = wt[N];
	for(int i=N-1; i; --i) {
		s[i] = s[i+1] + wt[i];
	}
	
	for(int i=1; i <= N; ++i) {
		tot_cost += s[i];
	}
	tot_cost -= sum;
	deque<line> dq;
	for(int k = 2; k <= K; ++k) {
		dq.clear();
		for(int i = 2; i <= N; ++i) {
			line cur = {-s[i], i*s[i] + dp[k-1][i]};
			while(dq.size() >= 2 && cur.intersectX(dq[dq.size()-2]) <= dq[dq.size()-1].intersectX(dq[dq.size()-2]))
				dq.pop_back();
			dq.push_back(cur);
		}
		int i = 0;
		for(int a = 1; a <= N; ++a) {
			while(dq[i+1].eval(a) > dq[i].eval(a))
				++i;
			dp[k][a] = dq[i].eval(a);
		}
	}
	cout << tot_cost - dp[K][1] << endl;
	return 0;
}

