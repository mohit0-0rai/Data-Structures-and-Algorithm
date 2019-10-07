#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;
#define MOD 1000000007

const int N = 1e5;
vi adj[N];
bool vis[N];
queue<int> q;

void addEdge(int u, int v) {
	adj[u].push_back(v);
	adj[v].push_back(u);
}

void bfs(int s) {
	q.push(s);
	vis[s] = 1;
	while(!q.empty()) {
		int u = q.front(); q.pop();
		cout << u << " ";
		for(int v : adj[u])
			if(!vis[v]) {
				q.push(v);
				vis[v] = 1;
			}
	}
	cout << endl;
}

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
	addEdge(1,2);
	addEdge(4,1);
	addEdge(2,3);
	addEdge(2,4);
	bfs(1);

	return 0;
}

