#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;
#define mod 1000000007

vector<int> buildLPS(string& s) {
	vector<int> lps(s.size());
	lps[0] = 0;
	for(int i = 1, j = 0; i < s.size();) {
		if(s[j] == s[i]) {
			++j;
			lps[i++] = j;
		}
		else if(j > 0)
			j = lps[j-1];
		else
			lps[i++] = 0;
	}
	return lps;
}

void kmp(const string &text, const string &pat, const vector<int>& lps) {
	for(int i = 0, j = 0; i < text.size();) {
		if(text[i] == pat[j]) {
			++j; ++i;
		}
		else if(j > 0)
			j = lps[j-1];
		else
			++i;

		if(j == pat.size()) {
			cout << "Found at : " << i - j << endl;
			j = lps[j - 1];
		}
	}
}

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	string pat = "AABA", text = "AAAABAABABAAB";
	vector<int> lps = buildLPS(pat);
	kmp(text, pat, lps);
	return 0;
}

