#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;
#define mod 1000000009

int main() {
	
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int n, i=0, cnt = 0;
	cin >> n;
	vector<vi> friends(n);
	vi bobs;
	set<int> s;
	map<int, bool> mark;
	while(i < n) {
		int in, num;
		cin >> in;
		bobs.push_back(in);
		s.insert(in);
		cin >> num;
		while(num--) {
			cin >> in;
			friends[i].push_back(in);
		}
		++i;
	}
	for(int i = 0; i < n; ++i)
		for(int j = 0; j < friends[i].size(); ++j) 
			if(s.find(friends[i][j]) == s.end() && !mark.find(friends[i][j])->second) {
				mark[friends[i][j]] = true;
				cnt++;
			}
	cout << cnt << "\n";

	return 0;

}

