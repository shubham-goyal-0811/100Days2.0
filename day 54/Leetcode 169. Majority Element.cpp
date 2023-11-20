class Solution {
public:
    int majorityElement(vector<int>& nums) {
        //Moore's Voting Algorithm
        int count =0;
        int ele;
        for(int i=0;i<nums.size();i++){
            if(count == 0){
                count++;
                ele=nums[i];
            }
            
            else if(nums[i]==ele)
                count++;
            else
                count--;
        }
        int freq=0;
        for(int i=0;i<nums.size();i++){
            if(ele==nums[i])
                freq++;
        }
        if(freq>=(nums.size()/2))
            return ele;
        return 0;//no need
    }
};
