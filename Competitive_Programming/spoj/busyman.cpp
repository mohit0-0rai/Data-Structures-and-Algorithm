#include<bits/stdc++.h>
using namespace std;

//Activity Selection Problem

int main()
{
  int t;
  cin >> t;
  while(t--)
  {
    int N;
    cin >> N;
    vector<pair<int, int>> in(N);

    for(int i=0; i<N; i++)
      cin >> in[i].first >> in[i].second;

    sort(in.begin(), in.end(), [] (pair<int, int> a, pair<int, int> b){
      return a.second < b.second;
    });
    
    int end = in[0].second, max_act =1;
    for(int i=1; i<N; ++i)
    {
      if(end <= in[i].first)
      {
        ++max_act;
	end = in[i].second;
      }
    }

    cout << max_act << "\n";
  }

  return 0;
}
