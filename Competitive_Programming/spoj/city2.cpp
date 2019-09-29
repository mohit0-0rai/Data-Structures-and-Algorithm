#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n=0,m=0;
  while(cin >> n >> m)
  {
    if(n==0 && m==0)
      break;
    unordered_map<string, int> strcount;	//count of similar type of DNA
    unordered_map<int, int> people;		//count of people with same 'strcount' value or count of people with same number of DNA copies 
    people[0] = n;
    string DNA;
    for(int i=0; i<n; i++) {
      cin >> DNA;
      people[strcount[DNA]]--;
      strcount[DNA]++;
      people[strcount[DNA]]++;
   }
   

   for(int i=1; i<=n; i++)
   	cout << people[i] << "\n";
  }

  return 0;
}
