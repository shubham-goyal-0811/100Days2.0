#include <bits/stdc++.h> 
int getLongestSubarray(vector<int>& nums, int k){
    // Write your code here
    int n = nums.size();
    int maxlen=0;
    long long sum = 0;
    map<long,long> presummap;
    for(int i =0 ; i < n ; i++){
        sum += nums[i];
        if(sum==k){
            maxlen=max(maxlen,i+1);
        }
        long long rev = sum-k;
        if(presummap.find(rev)!=presummap.end()){
            int len = i - presummap[rev];
            maxlen=max(maxlen,len);
        }
        if(presummap.find(sum)==presummap.end()){
            presummap[sum]=i;
        }
    }
    return maxlen;
}