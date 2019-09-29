#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;
#define mod 1000000007

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
  int n;
	ifstream fin;
	ofstream fout;
	fin.open("input.txt");
	fout.open("output.txt");
	while(fin >> n) {
	bool yes = true;
	vector<pii> v(2*n);
	for(int i = 0; i < 2*n; ++i) {
		fin >> v[i].first;
		v[i].second = i+1;
	}
	sort(v.begin(), v.end());
	for(int i = 0; i < 2*n; i += 2) {
		if(v[i].first != v[i+1].first) {
				yes = false;
				break;
		}
	}
	if(!yes)
		fout << -1 << endl;
	else
		for(int i = 0; i < 2*n; i += 2)
			fout << v[i].second << " " << v[i+1].second << endl;
	}
	return 0;
}

