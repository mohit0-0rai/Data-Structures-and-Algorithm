#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;
#define MOD 1000000007

ll gcd(ll a, ll b) {
	while(a && b) {
		a %= b;
		swap(a, b);
	}
	return (b ? b : a);
}

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	cout << "Enter two numbers as \"num1 num2\"" << endl;
	ll a, b;
	cin >> a >> b;
	cout << gcd(a, b) << endl;
	return 0;
}

