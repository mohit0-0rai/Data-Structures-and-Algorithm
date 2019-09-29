#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;
#define mod 1000000009

void dfs(vector<int> *adj, bool *vis, int u, int& count) {
	vis[u] = true;
	for(auto& v : adj[u]) {
		if(!vis[v]) {
			++count;
			dfs(adj, vis, v, count);
		}
	}
}

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int m, n;
	cin >> n >> m;
	vector<int> adj[n+1];
	for(int i = 0; i < m; ++i) {
		int u, v;
		cin >> u >> v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}
	bool vis[n+1] = {0};
	int count, max = -1;
	for(int i = 1; i <= n; ++i) {
		count = 0;
		if(!vis[i]) {
			dfs(adj, vis, i, count);
			if(max < count)
				max = count;
		}
	}
	cout << max << endl;

	return 0;
}

