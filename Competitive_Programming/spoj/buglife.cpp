#include<bits/stdc++.h>
using namespace std;

//2-coloring problem

void add_edge(vector<vector<int>>& a, int u, int v)
{
	a[u].push_back(v);
	a[v].push_back(u);
}

bool hasOddCycle(int s, vector<bool>& vis, vector<vector<int>>&g, int p, int depth =0)
{
	vis[s] = true;
	bool hasOdd = false;
	for(auto& v : g[s])
	{
		if(!vis[v])
			hasOdd = hasOddCycle(v,vis,g,s,depth+1);
		else if(v != p && (depth+1)%2 != 0)
			hasOdd = true;
	}
	return hasOdd;
}

int main()
{
	int t, sc=0;
	cin >> t;
	while(t > sc++)
	{
		int b,n;
		cin >> b >> n;
		vector<vector<int>> g(b+1);
		vector<bool> vis(b, 0);
		while(n--)
		{
			int a,b;
			cin >> a >> b;
			add_edge(g, a, b);
		}
		cout << "Scenario #" << sc << ":" << "\n";
		bool hasOdd = false;
		for(int i=1; i <= b; i++)
		{
			if(!vis[i])
				hasOdd = hasOddCycle(i, vis, g, i);
			if(hasOdd)
				break;
		}
		if(hasOdd)
			cout << "Suspicious bugs found!" << "\n";
		else
			cout << "No suspicious bugs found!" << "\n";
		
	}
	return 0;
}
