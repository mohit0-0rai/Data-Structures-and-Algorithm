#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mod 1000000007

ll dp[10010];
void pop_dp() {
    dp[0] = 1;
    for(int i = 1; i < 10001; i++){
        dp[i] = (i * (dp[i-1] % mod)) % mod;
    }
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int t;
    cin >> t;
    pop_dp();
    while(t--) {
        int n;
        cin >> n;
        cout << dp[n] << endl;
    }
    
}
