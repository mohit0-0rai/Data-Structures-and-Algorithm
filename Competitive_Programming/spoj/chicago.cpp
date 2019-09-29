#include<bits/stdc++.h>
using namespace std;

typedef pair<double, int> pdi;
typedef vector<int> vi;
typedef vector<pdi> vdi;

double dist[101];


void add_edge(vector<list<pdi>>& g, int u, int v, double w)
{
  g[u].push_back(make_pair(w,v));
  g[v].push_back(make_pair(w,u));
}

void max_dijkstra(int s, int n, vector<list<pdi>>& g, vector<double>& dist)
{
  priority_queue<pdi, vdi, less<pdi>> pq;
  dist[s] = 1.0;
  pq.push(make_pair(1.0,s));

  while(!pq.empty())
  {
    int u = pq.top().second;
    pq.pop();

    for(auto& i : g[u])
    {
      double w = i.first;
      int v = i.second;
      if(dist[v] < dist[u] * (w/100))
      {
        dist[v] = dist[u] * (w/100);
	pq.push(make_pair(dist[v], v));
      }
    }
  }
  cout << fixed << setprecision(6);
  cout << dist[n]*100 << " percent" << "\n";
}

int main()
{
  int n, m;
  while(true)
  {
    cin >> n;
    if(!n)
      break;
    cin >> m;
    vector<list<pdi>> g(n+1);
    vector<double> dist(n+1, 0.0);
    while(m--)
    {
      int u, v; double w;
      cin >> u >> v >> w;
      add_edge(g, u, v, w);
    }
    max_dijkstra(1, n, g, dist);

  }
  return 0;
}
