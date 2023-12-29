int lowerBound(vector<int> arr, int n, int x) {
	// Write your code here
	int low = 0;
	int high = n-1;
	int mid;
	int ans = n;
	while(low<=high){
		mid = low + (high-low)/2;
        if (arr[mid] >= x) {
            ans = mid;
            high = mid - 1;
        }
		else
            low = mid + 1;
    }
	return ans;
}
