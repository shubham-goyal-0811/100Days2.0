#include<vector>
#include <bits/stdc++.h>
int getLongestZeroSumSubarrayLength(vector<int> &arr){
	// Write your code here.
	//Prefix sum algorithm 

	unordered_map<int,int>mpp;
	int maxlen = 0;
    int presum = 0;
    for(int i = 0 ; i < arr.size(); i++){
        presum += arr[i];
        if(presum==0)
            maxlen = i+1;
        else{
            if (mpp.find(presum) != mpp.end()) {
              int final_index = mpp[presum];
              maxlen = max(maxlen, i - final_index);
            }
            else
                mpp[presum] = i;
        }
    }
    return maxlen;
}