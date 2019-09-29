#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;
#define mod 1000000007

void convertTo(bool type, string& s) {
	if(type) {
		for(auto& i : s) {
			if(i - 'Z' > 0)
				i = i - 'a' + 'A';
		}
	}
	else {
		for(auto& i : s) {
			if(i - 'Z' <= 0)
				i = i - 'A' + 'a';
		}
	}
}

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	string s;
	int cU=0, cL=0;
	cin >> s;
	for(auto& i : s) {
		if(int(i) >= 97)
			++cL;
		else
			++cU;
	}
	if(cU <= cL)
		convertTo(0, s);
	else
		convertTo(1, s);
	cout << s << endl;
	return 0;
}

