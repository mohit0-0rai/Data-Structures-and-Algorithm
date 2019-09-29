#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;
#define mod 1000000009

void buildST(vector<int>& st, vector<int>& a, int v, int L, int R) {
	if(L == R) {
		st[v] = a[L];
		return;
	}
	if(L < R) {
		int mid = (L+R)/2;
		buildST(st, a, 2*v, L, mid);
		buildST(st, a, 2*v+1, mid+1, R);
		st[v] = st[2*v] + st[2*v+1];
	}	
}

int queryST(vector<int>& st, int v, int L, int R, int l, int r) {
	
	if(l > R || r < L)
		return 0;
	
	if(l <= L && r >= R)
		return st[v];
	int mid = (L + R) / 2;
	
	return  queryST(st, 2*v, L, mid, l, r) + queryST(st, 2*v+1, mid+1, R, l, r);
}

void updateST(vector<int>& st, int v, int L, int R, int pos, int val) {
	if(L == R && L == pos) {
		st[v] = val;
		return;
	}

	int mid = (L+R)/2;
	if(pos <= mid)
		updateST(st, 2*v, L, mid, pos, val);
	else
		updateST(st, 2*v+1, mid+1, R, pos, val);

	st[v] = st[2*v] + st[2*v+1];
	
} 

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
	vector<int> a({1,2,-3, 8, 9});
	vector<int> st(a.size()*4 + 1);
	buildST(st, a, 1, 0, 4);
	//cout << st[1] << endl;
	cout << queryST(st, 1, 0, 4, 1, 3) << endl;
	return 0;
}

