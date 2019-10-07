#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;
#define MOD 1000000007

const int N = 1e5;
vi adj[N];
vi tour;

void addEdge(int u, int v) {
	adj[u].push_back(v);
	adj[v].push_back(u);
}

void eulerTourUtil(int v, int p) {
	tour.push_back(v);
	for(int u : adj[v])
		if(u != p) {
			eulerTourUtil(u, v);
			tour.push_back(v);
		}
}

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
	addEdge(1, 2);
	addEdge(2, 3);
	addEdge(2, 4);
	eulerTourUtil(1, -1);
	
	for(int el : tour)
		cout << el << " ";
	cout << endl;

	return 0;
}

