#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;
#define mod 1000000007

const int MAXN = 100001;
vector<int> adj[MAXN];
bool vis[MAXN];

void dfs(int u) {
	vis[u] = 1;
	for(auto& v : adj[u]) {
		if(!vis[v])
			dfs(v);
	}
}

void add_edge(int u, int v) {
	adj[u].push_back(v);
	adj[v].push_back(u);
}

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int n, m, comps = 0;
	cin >> n >> m;
	for(int i = 0; i < m; ++i) {
		int u, v;
		cin >> u >> v;
		add_edge(u, v);
	}
	for(int i = 1; i <= n; ++i) {
		if(!vis[i]) {
			dfs(i);
			++comps;
		}
	}
	cout << comps << endl;
	return 0;
}

