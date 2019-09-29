#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;
#define mod 1000000007

char event[10000001];

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int t;
	cin >> t;
	while(t--) {
		int N;
		cin >> N;
		vector<pii> in(N);
		int end = -1;
		for(int i = 0; i < N; ++i) {
			cin >> in[i].first >> in[i].second;
			if(end < in[i].second)
				end = in[i].second;
		}
		sort(in.begin(), in.end(), [] (pii a, pii b){
					return a.first < b.first;
		});
		for(int i = 0; i < N; ++i) {
			event[in[i].first] = 's';
			event[in[i].second] = 'e';
		}
		int ctr=0, max = -1;
		for(int i = in[0].first; i <= end; ++i) {
			if(event[i] == 's')
				++ctr;
			else if(event[i] == 'e')
				--ctr;
			if(max < ctr)
				max = ctr;
		}
		cout << max << endl;
	}
	return 0;
}

