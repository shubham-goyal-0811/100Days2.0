class Solution {
public:
    int longestConsecutive(vector<int>& nums){
        unordered_set<int> set;
        for(auto x : nums){
            set.insert(x);
        }
        int maxlen=0;
        for(int i = 0 ; i< nums.size();i++){
            if(set.find(nums[i]-1)==set.end()){//starting element of my sequence
                int len = 0;
                int x = nums[i];
                while(set.find(x)!=set.end()){
                    len++;
                    x=x+1;
                }
                maxlen=max(len,maxlen);
            }
        }
        return maxlen;
    }
};// Same code submitted at CN too :) 
