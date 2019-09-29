#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


ll solve(int n)
{
    ll outer=1, inner, cnt=0;
    while(outer*outer<=n)
    {
        inner = outer;
        while(true)
        {
            if(outer*inner<=n)
            {
                ++cnt;++inner;
            }
            else
                break;
        }
        ++outer;
    }

    return cnt;
}

int main()
{
    int N;
    cin >> N;
    cout << solve(N) << "\n";
    return 0;
}
