#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;
#define mod 1000000007

set<ll> s;
bool prime[1000001];
void precomp() {
	s.insert(2*2);
	fill_n(prime, 1000001, 1);
	for(ll i = 2; i*i <= 1000000; i += 1) {
		if(prime[i]) {
			for(ll j = i*i; j <= 1000000; j += i)
				prime[j] = 0;
		}
	}
	for(ll i = 3; i <= 1000000; i += 2)
		if(prime[i])
			s.insert(i*i);
}
int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int n;
	cin >> n;
	precomp();
	while(n--) {
		ll a;
		cin >> a;
		if(s.find(a) != s.end())
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
	return 0;
}

