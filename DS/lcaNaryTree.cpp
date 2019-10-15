#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;
#define MOD 1000000007
const int MAXN = 1e5;
vi adj[MAXN];
vi et, depth;

void addEdge(int u, int v) {
	adj[u].push_back(v);
	adj[v].push_back(u);
}

void eulerTour(int u, int p, int level) {
	et.push_back(u);
	depth.push_back(level);
	for(int& v : adj[u]) {
		if(v != p) {
			eulerTour(v, u, level+1);
			et.push_back(u);
			depth.push_back(level);
		}
	}
}


int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	addEdge(1, 2);
	addEdge(2, 4);
	addEdge(2, 5);
	addEdge(2, 6);
	addEdge(3, 7);
	addEdge(3, 8);
	addEdge(1, 3);
	eulerTour(1, -1, 0);

	for(int i = 0; i < et.size(); ++i)
		cout << et[i] << " ";
			cout << endl;
	for(int i = 0; i < depth.size(); ++i)
		cout << depth[i] << " ";
			cout << endl;

	return 0;
}

