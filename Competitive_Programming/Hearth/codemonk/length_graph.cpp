#include<bits/stdc++.h>
using namespace std;

void add_edge(vector<int> *adj, int u, int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}

int main() {
    int n, m, k;
    cin >> n >> m >> k;
    int val[n+1];
    for(int i = 1; i <= n; ++i)
        cin >> val[i];
    vector<int> adj[n+1];
    for(int i = 0; i < m; ++i) {
        int u, v;
        cin >> u >> v;
        add_edge(adj, u, v);
    }
    for(int i = 1; i <= n; ++i) {
        if(adj[i].size() < k)
            cout << -1 << "\n";
        else {
            sort(adj[i].begin(), adj[i].end(), [&](const int& a, const int& b){
                if(val[a] > val[b])
                    return true;
                else if(val[a] == val[b]) {
                    if(a > b)
                        return true;
                }
                return false;
            });
            cout << adj[i][k-1] << "\n";
            
        }
    }
		/*for(int i = 0; i < adj[14].size(); ++i) {
			cout << adj[14][i] << ":" << val[adj[14][i]] << " ";
		}*/
    return 0;
}

