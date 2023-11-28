#include<vector>

void mergeTwoSortedArraysWithoutExtraSpace(vector<long long> &arr1, vector<long long> &arr2){
	// Write your code here.
    int m = arr1.size();//3
    int n = arr2.size();//4
    //Both are individually soretd :)
    int left = m-1;
    int right = 0;
    while (left>=0 and right < n){
        if(arr1[left]>arr2[right]){
            swap(arr1[left],arr2[right]);
            left--;right++;
        }
        else
            break;
    }
    sort(arr1.begin(),arr1.end());
    sort(arr2.begin(),arr2.end());
}