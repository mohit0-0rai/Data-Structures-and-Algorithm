#include<bits/stdc++.h>
using namespace std;
#define max 1000000
typedef long long ll;

ll sum[max];

void pre()
{
    sum[0] = sum[1] = 0;
    long i, j, num;
	for(i=2; i<max; i++)
		sum[i] = 1;
    for(i=2; i<max/2; i++)
    {
		j=2;
        while((num = j*i) < max)
        {
            sum[num] += i;
            j++;
        }
    }
	for(i=2; i<max; i++)
		sum[i] += sum[i-1];

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

	pre();

    while(t--)
    {
        long N;
  	    cin >> N;
		
		cout << sum[N] << "\n";
    }

	return 0;
}
