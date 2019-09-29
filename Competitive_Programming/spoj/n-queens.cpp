#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;
#define mod 1000000009

bool isSafe(vector<vector<bool>>& board, int x, int y, int n) {

	for(int k = 0; k < n; ++k)
		if(k != y)
			if(board[x][k])
				return false;
	for(int k = 0; k < n; ++k)
		if(k != x)
			if(board[k][y])
				return false;
	for(int i = x-1, j = y-1; i >= 0 && j >= 0; --i, --j)
		if(board[i][j])
			return false;
	for(int i = x+1, j = y+1; i < n && j < n; ++i, ++j)
		if(board[i][j])
			return false;
	for(int i = x-1, j = y+1; i >= 0 && j < n; --i, ++j)
		if(board[i][j])
			return false;
	for(int i = x+1, j = y-1; i < n && j >= 0; ++i, --j)
		if(board[i][j])
			return false;

	return true;

}

bool n_queens(vector<vector<bool>>& board, int col, int n) {
	if(col >= n)
		return true;

	for(int i = 0; i < n; ++i) {					// for all rows in current column
		if(!isSafe(board, i, col, n))
			continue;

		board[i][col] = true;
		if(n_queens(board, col+1, n))
			return true;

		board[i][col] = false;						// backtrack by making current position false again
	}
	return false;
}

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int n;
	cin >> n;
	vector<vector<bool>> board(n, vector<bool>(n, 0));
	if(n_queens(board, 0, n)) {
		cout << "YES" << endl;
		for(int i=0; i < n; ++i) {
			for(int j=0; j < n; ++j) {
				cout << board[i][j] << " " << flush;
			}	
			cout << endl;
		}
	}
	else
		cout << "NO" << endl;

	return 0;
}

