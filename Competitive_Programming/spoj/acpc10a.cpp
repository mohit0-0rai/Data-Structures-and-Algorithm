#include<bits/stdc++.h>
using namespace std;

int main()
{
	
	while(true)
	{
		int  n1=0, n2=0, n3=0;
		cin >> n1 >> n2 >> n3;
	
		if(!n1 && !n2 && !n3)
			break;
		if((n2-n1) == (n3-n2))
			cout << "AP " << (n1+3*(n2-n1)) << "\n";
		else
			cout << "GP " << (n1*pow(n2/n1, 3)) << "\n";
	}
}
