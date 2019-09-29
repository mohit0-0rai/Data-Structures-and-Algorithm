#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int t;
	cin >> t;
	while(t--) {
		int n, c, ans;
		cin >> n >> c;
		vector<int> stalls(n);
		
		for(int i=0; i<n; ++i)
			cin >> stalls[i];
		
		sort(stalls.begin(), stalls.end());
		
		ll prev_stall;
		ll s = stalls[0], e = stalls[n-1], mid;
		int temp_cows;

		while(s <= e) {
			mid = (s+e)/2;
			prev_stall = stalls[0];
			temp_cows = 1;
			for(int i=1; i < n; ++i) {
				if(stalls[i]-prev_stall >= mid) {
					prev_stall = stalls[i];
					++temp_cows;
				}
			}

			if(temp_cows < c)
				e = mid-1;
			else {
				ans = mid;
				s = mid+1;
			}
		}

		cout << ans << endl;
	}
	return 0;
}
