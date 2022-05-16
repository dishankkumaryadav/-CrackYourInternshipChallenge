// Question Link: https://practice.geeksforgeeks.org/problems/chocolate-distribution-problem3825/1/#

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
    public:
    long long findMinDiff(vector<long long> a, long long n, long long m){
    //code
        long long int minA = INT_MAX;
        long long int d = 0;
        sort(a.begin(), a.end());
        for(long long int i=0; i<n-m+1; i++){
            d = a[i+m-1] - a[i];
            minA = std::min(minA, d);
        }
        return minA;
    }   
};

// { Driver Code Starts.
int main() {
	long long t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		vector<long long> a;
		long long x;
		for(long long i=0;i<n;i++)
		{
			cin>>x;
			a.push_back(x);
		}
		
		long long m;
		cin>>m;
		Solution ob;
		cout<<ob.findMinDiff(a,n,m)<<endl;
	}
	return 0;
}  // } Driver Code Ends