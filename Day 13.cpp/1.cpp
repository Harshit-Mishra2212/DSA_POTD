Question_1 : https://www.naukri.com/code360/problems/ceiling-in-a-sorted-array_1825401
Approach : using binary search, searched for the upper and lower bounds of x and stored them in pair...if any of them is not found then returned -1 in place of that
TC : O(logn)
SC : O(1)

pair<int, int> getFloorAndCeil(vector<int> &a, int n, int x) {
	// Write your code here.
	pair<int, int> v = {-1,-1};
	int lo = 0;
	int hi = n-1;
	while(lo<=hi){
		int mid = lo + (hi-lo)/2;
		if(a[mid]==x){
			return {x,x};
		}
		else if (a[mid]<x){
			v.first = a[mid];
			 lo = mid+1;
		}
		else{
			v.second = a[mid];
			 hi = mid-1;
		}
	}

	return v;
}