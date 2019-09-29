#include<bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef pair<long long, int> plli;

void add_edge(vector<list<plli>>& g, int u, int v, long long w) {
	g[u].push_back(make_pair(w,v));
	g[v].push_back(make_pair(w,u));
}

long long prims(vector<list<plli>>& g, int s) {
	
	int v = g.size();
	priority_queue<plli, vector<plli>, greater<plli>> pq;
	pq.push(make_pair(0,1));
	vi pie(v+1, -1);
	vector<bool> inMST(v+1, false);
	vector<long long> key(v+1, LLONG_MAX);
	key[s] = 0;
	long long cost = 0;
	while(!pq.empty()) {
		int u = pq.top().second;
		if(!inMST[u])
			cost += pq.top().first;
		pq.pop();
		inMST[u] = true;
		for(auto& i : g[u]) {
			int v = i.second;
			if(inMST[v] == false && i.first<key[v]) {
				pie[v] = u;
				key[v] = i.first;
				pq.push(make_pair(key[v], v));
			}
		}
	}
	return cost;
}

int main() {
	
	int t;
	scanf("%d", &t);
	while(t--) {
		int p, n, m;
		scanf("%d%d%d", &p, &n, &m);
		vector<list<plli>> g(n+1);
		int u, v; long long w;
		for(int i=0; i<m; i++) {
			scanf("%d%d%lld", &u, &v, &w);
			add_edge(g, u, v, w);
		}
		
		printf("%lld\n", prims(g, 1)*p);

	}
	
	return 0;
}
