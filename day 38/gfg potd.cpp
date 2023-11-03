//User function template for C++
class Solution{
public:
	// Function to check if the
	// Pythagorean triplet exists or not
	bool checkTriplet(int arr[], int n) {
	    for(int i=0;i<n;i++){
	        arr[i]*=arr[i];
	    }
	    // code here
	    sort(arr,arr+n);

	    for(int i=n-1;i>=2;i--){
	        int s=0;
	        int e=i-1;
	        while(s<e){
	            if(arr[s]+arr[e]==arr[i]){
	                return true;
	            }
	            else if (arr[s]+arr[e]>arr[i])
	                e--;
	            else
	                s++;
	        }
	    }
	    return false;
	}
};
