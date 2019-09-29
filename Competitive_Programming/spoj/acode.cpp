#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


ll solve(string &in)
{
    int n = in.size();

    if(n == 1)
        return 1;
    if(in[0] == '0')
        return 0;
    ll prev2 =1, prev1 =1, curr =0;
    for(int i=1; i<n; ++i)
    {
        if(in[i]-'0')
            curr = prev1;
        int j = (in[i-1]-'0')*10 + (in[i]-'0');
        if(j>9 && j<27)
            curr += prev2;
        prev2 = prev1;
        prev1 = curr;
    }

    return curr;
}

int main()
{
    string in;
    cin >> in;
    while(in.compare("0") && !in.empty())
    {
        printf("%lld\n", solve(in));
        cin >> in;
    }
    return 0;
}
