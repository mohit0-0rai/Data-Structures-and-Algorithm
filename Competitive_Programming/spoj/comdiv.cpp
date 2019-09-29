#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
  if(b == 0)
    return a;
  else
    return gcd(b, a%b); 
}

int num_div(int n)
{
  int divcount =0;
	double sr = sqrt(n);
  for(int i=1; i<sr; ++i)
  {
    if(n%i == 0)
      divcount += 2;
  }
  if(sr-floor(sr) == 0)
    ++divcount;

  return divcount;
}

int main()
{
  int t;
  scanf("%d", &t);
  while(t--) {
    int a, b;
    scanf("%d%d", &a, &b);

		int g = gcd(a,b);

		printf("%d\n", num_div(g));
  }

  return 0;
}
