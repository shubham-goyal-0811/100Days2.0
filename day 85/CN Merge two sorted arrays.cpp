#include <bits/stdc++.h>

vector<int> ninjaAndSortedArrays(vector<int>& nums1, vector<int>& nums2, int m, int n) {
	// Write your code here.
	int i=m-1;
    int j=n-1;
    int k=m+n-1;
    while(j>=0){
        if(i>=0 and nums1[i]>nums2[j])
            nums1[k--]=nums1[i--];
        else
            nums1[k--]=nums2[j--];
    }
	return nums1;
}