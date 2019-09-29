#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;
#define mod 1000000009

void add_edge(vector<int>* adj, int u, int v) {
	adj[u].push_back(v);
}

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int t;
	cin >> t;
	while(t--) {
		int  n, m, s;
		cin >> n >> m >> s;
		vector<int> v(n+1), d(n+1), adj[n+1];
		vector<bool> vis(n+1, false);
		queue<int> q;
		for(int i = 1; i <= n; ++i) {
			cin >> v[i];
			d[i] = v[i];
		}
		for(int i = 0; i < m; ++i) {
			int u, v;
			cin >> u >> v;
			add_edge(adj, u, v);
		}
		q.push(s);
		while(!q.empty()) {
			int u = q.front(); q.pop();
			for(auto& i : adj[u]) {
				if(!vis[i]) {
				  if(d[u] > d[i])
				        d[i] = d[u];
					vis[i] = true;
					q.push(i);
				}
				else
				    if(d[u] < d[i]){
				        d[i] = max(d[u], v[i]);
				    }
			}
		}
        d[s] = v[s];
		for(int i = 1; i <= n; ++i)
			cout << d[i] << " " << flush;
		cout << endl;
	}

	return 0;
}
