#include<bits/stdc++.h>
using namespace std;

void swap(int& a, int& b) { a = a ^ b; b = a ^ b; a = a ^ b; }

int main() {
	
	int f, s, g, u, d;
	cin >> f >> s >> g >> u >> d;
	bool res = true;
	int cnt=0;

	if(g > f)
		res = false;
	else {
		if(g < s) {
			swap(u, d);
			swap(s, g);
		}
	int rem, i=0; //bool found = false;

	if(g>u)
		cnt = (g-s)/u;
	rem = (g-s)%u;
	if(rem)
	{
		for(i = rem; i <= g - 1 ; i += d) {
			if(i % u == 0)
				break;
			cnt++;
		}
	}
	if(i > g - 1)
		res = false;
	else
		cnt += i/u;
	}
	if(res) 
		cout << cnt << "\n";
	else
		cout << "use the stairs" << "\n";

	return 0;

}
