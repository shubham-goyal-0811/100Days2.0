#include <bits/stdc++.h>

int findMajorityElement(int arr[], int n) {
	// Write your code here.
	int count =0;
	int ele;
	for(int i=0;i<n;i++){
        if (count == 0) {
            ele = arr[i];
            count++;
        }
		else if(ele == arr[i]){
			count++;
		}
		else
			count--;
    }
	int cnt1=0;
	for(int i=0;i<n;i++){
		if(ele==arr[i])
			cnt1++;
	}
	if(cnt1>(n/2))
		return ele;
	return -1;
}
