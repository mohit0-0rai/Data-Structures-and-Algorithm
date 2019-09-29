#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;
#define mod 1000000007

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	string s;
	int max = 1, curr = 1;
	cin >> s;	
	for(int i = 1; i < s.size(); ++i) {
		if(s[i] == s[i-1])
			++curr;
		else
			curr = 1;
		if(max < curr)
			max = curr;
	}
	cout << max << endl;
	return 0;
}

