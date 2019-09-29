#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(vector<int>& v, ll k)
{
	ll sum=0, max_sum=0;
	int cnt=0, max_cnt=0;
	for(int i=0; i<v.size(); i++)
	{
		if((sum+v[i]) <= k)
		{
			sum += v[i];
			cnt++;
		}
		else if(sum!=0)
			sum = sum - v[i-cnt] + v[i];
			
		if(max_cnt < cnt)
		{
			max_cnt = cnt;
			max_sum = sum;
		}
		else if(max_cnt == cnt && max_sum > sum)
			max_sum = sum;
	}
	
	cout << max_sum << " " << max_cnt << "\n";
}

int main() {

	int t;
	cin >> t;
	while(t--)
	{
		int n;
		ll k;
		cin >> n >> k;
		vector<int> in(n);
	
		for(int i=0; i<n; i++)
		{
			cin >> in[i];
		}

		solve(in, k);		
	}

	return 0;
}
