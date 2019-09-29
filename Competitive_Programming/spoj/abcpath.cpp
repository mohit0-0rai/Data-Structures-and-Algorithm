#include <bits/stdc++.h>
using namespace std;

char in[50][50];
bool visited[50][50];
int N, M;
int path[][2] = {{-1,-1}, {-1,0}, {-1,1}, {0,-1}, {0,1}, {1,-1}, {1,0}, {1,1}};

void dfs(int i, int j, int depth, int& max_depth)
{
	if(max_depth < depth)
		max_depth = depth;

	for(int k=0; k<8; ++k)
	{
		int r = i+path[k][0], c = j+path[k][1];

		if((r >=0 && r <M) && (c >=0 && c <N) && !visited[r][c])
		{
			if(in[r][c] == in[i][j] + 1)
			{
				visited[r][c] = 1;
				dfs(r, c, depth+1, max_depth);
			}
		}
	}

}

int main() {
	
        scanf("%d%d", &M, &N);
        int casecnt = 0;
        while(M && N)
        {
            casecnt++;
			int max_depth = 0;
            for(int i=0; i<M; ++i) 
                for(int j=0; j<N; ++j)
				{
                    cin >> in[i][j];
					visited[i][j] = 0;
				}

			for(int i=0; i<M; ++i)
				for(int j=0; j<N; ++j)
				{
					if(in[i][j] == 'A')
					{
						visited[i][j] = 1;
						dfs(i, j, 1, max_depth);
					}
				}
            printf("Case %d: %d\n", casecnt, max_depth);
            scanf("%d%d", &M, &N);
        }
	return 0;
}
