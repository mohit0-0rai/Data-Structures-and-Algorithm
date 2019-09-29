#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;
#define mod 1000000007

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	string in, out;
	cin >> in;
	for(int i = 0; i < in.size();) {
		if(in[i] == '.') {
			out.push_back('0');
			++i;
		}
		else if(in[i] == '-' && in[i+1] == '.') {
			out.push_back('1');
			i += 2;
		}
		else {
			out.push_back('2');
			i += 2;
		}
	}
	cout << out << endl;
	return 0;
}

