#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int path[][2] = {{0,1}, {0,-1}, {1,0}, {-1,0}};

void bfs(int i, int j, vector<vector<int>>& dist)
{
	queue<pair<int, int>> q;
	q.push(make_pair(i,j));
	int n = dist.size();
	int m = dist[0].size();
	while(!q.empty())
	{
		pair<int, int> s = q.front();
		q.pop();
		for(int i=0; i<4; i++)
		{
			int r = s.first + path[i][0];
			int c = s.second + path[i][1];
			if((r>=0 && r<n) && (c>=0 && c<m) && dist[r][c] > 1+dist[s.first][s.second])
			{
				dist[r][c] = 1+dist[s.first][s.second];
				q.push(make_pair(r,c));
			}
		}
	}
}

int main()
{
	int t;
	cin >> t;
	
	while(t--)
	{
		int n,m;
		cin >> n >> m;
		vector<vector<int>> dist(n, vector<int>(m, INT_MAX));
		vector<string> in(n);
		vector<pair<int,int>> b;
		for(int i=0; i<n; i++)
				cin >> in[i];
		for(int i=0; i<n; i++)
		{
			for(int j=0; j<m; j++)
			{
				if(in[i][j] == '1')
				{
					dist[i][j] = 0;
					bfs(i, j, dist);
				}
			}
			cout << "\n";
		}
		
		for(int i=0; i<n; i++)
		{
			for(int j=0; j<m; j++)
				cout << dist[i][j] << " ";
			cout << "\n";
		}
	}
	return 0;
}
