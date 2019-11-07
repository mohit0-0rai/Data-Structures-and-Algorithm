#include<bits/stdc++.h> 
using namespace std; 
int arr[1001][1001];
// Return smallest element greater than or equal 
// to the current element. 
int bsearch(int low, int high, int n, int arr[]) 
{ 
    int mid = (low + high)/2; 
  
    if(low <= high) 
    { 
        if(arr[mid] < n) 
            return bsearch(mid +1, high, n, arr); 
        return bsearch(low, mid - 1, n, arr); 
    } 
  
    return low; 
} 
  
// Return the minimum absolute difference adjacent 
// elements of array 
int mindiff(int n, int m) 
{ 
    // Sort each row of the matrix. 
    for (int i = 0; i < n; i++) 
        sort(arr[i], arr[i] + m); 
  
    int ans = INT_MAX; 
  
    // For each matrix element 
    for (int i = 0; i < n - 1; i++) 
    { 
        for (int j = 0; j < m; j++) 
        { 
            // Search smallest element in the next row which 
            // is greater than or equal to the current element 
            int p = bsearch(0, m-1, arr[i][j], arr[i + 1]); 
            ans = min(ans, abs(arr[i + 1][p] - arr[i][j])); 
  
            // largest element which is smaller than the current 
            // element in the next row must be just before 
            // smallest element which is greater than or equal 
            // to the current element because rows are sorted. 
            if (p-1 >= 0) 
                ans = min(ans, abs(arr[i + 1][p - 1] - arr[i][j])); 
        } 
    } 
    return ans; 
}

int main() {
	int n, m;
	cin >> n >> m;
	for(int i = 0; i < n; ++i)
		for(int j = 0; j < m; ++i)
			cin >> arr[i][j];
	cout <<	mindiff(n, m) << endl;
}
