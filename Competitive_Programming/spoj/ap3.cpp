#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;

int main()
{
//	ios_base::sync_with_stdio(false);
	int t;
	cin >> t;
	while(t--)
	{
		ll k1, k2, k3, n, d, a;
		cin >> k1 >> k2 >> k3;
		ld tmp = 7.0*k1 + 5.0*k2 + 2.0*k3;
		ld sq = sqrtl(tmp*tmp-48.0*k3*(k1+k2));
		ld num = (tmp+sq)/(2.0*(k1+k2));
		n = llrintl(num);
		ld diff = (k2-k1)/(n-6.0);
		d = llrintl(diff);
		a = k1-2*d;

		cout << n << "\n";

		for(ll i=0; i<n; i++)
		{
			cout << a+i*d << " ";
		}
		cout << "\n";
	
	}
return 0;	
}
