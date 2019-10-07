#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;
#define MOD 1000000007
const int N = 1e5;
int pref[N];

void calcPrefixArray(const string& s) {
	int n = s.size();
	pref[0] = 0;
	for(int i = 0, j = 1; j < n;) {
		if(s[i] == s[j]) {
			pref[j] = i+1;
			++i; ++j;
		}
		else {
			if(i == 0) {
				pref[j] = 0;
				++j;
			}
			else
				i = pref[i-1];
		}
	}
}

void kmpSearch(const string& str, const string& pat) {
	int strlen = str.size(), patlen = pat.size();
	for(int i = 0, j = 0; i < strlen;) {
		if(str[i] == pat[j]) {
			if(j == patlen - 1) {
				cout << "Found at : " << (i - j) << endl;
				j = pref[j];
			}
			else
				++j;
			++i;
		}
		else {
			if(j == 0)
				++i;
			else
				j = pref[j-1];
		}
	} 
}

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	string str = "ababcbababcababcababcac";
	string pat = "babbaba";

	cout << "String : " << str << endl << "Pattern : " << pat << endl;

	calcPrefixArray(pat);

	cout << "Prefix array : ";
	for(int i = 0; i < pat.size(); ++i)
		cout << pref[i] << " ";
	cout << endl;

	kmpSearch(str, pat);

	return 0;
}

