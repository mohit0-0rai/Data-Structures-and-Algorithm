#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;
#define mod 1000000007

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int r, c;
	for(int i = 0; i < 5; ++i)
		for(int j = 0; j < 5; ++j) {
			int in;
			cin >> in;
			if(in == 1) {
				r = i; c = j;
				break;
			}
		}
	cout << abs(r-2) + abs(c-2) << endl;
	return 0;
}

