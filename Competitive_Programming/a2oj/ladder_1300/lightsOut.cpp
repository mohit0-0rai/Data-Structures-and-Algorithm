#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;
#define mod 1000000007

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int a[3][3];
	bool grid[3][3];
	std::fill(&grid[0][0], &grid[0][0] + 9, 1);
	pii rc[5] = {{0,0}, {-1,0}, {0,-1}, {1,0}, {0,1}};

	for(int i =0; i < 3; ++i)
		for(int j = 0; j < 3; ++j)
			cin >> a[i][j];

	for(int i =0; i < 3; ++i)
		for(int j = 0; j < 3; ++j) {
			if(a[i][j] & 1) {
				for(int k = 0; k <= 4; ++k) {
					int r, c;
					r = i + rc[k].first;
					c = j + rc[k].second;
					if(r >= 0 && c >= 0 && r < 3 && c < 3)
						grid[r][c] ^= true;
				}
			}
		}
	for(int i = 0; i < 3; ++i) {
		for(int j = 0; j < 3; ++j) {
			cout << grid[i][j];
		}
		cout << endl;
	}
	return 0;
}
