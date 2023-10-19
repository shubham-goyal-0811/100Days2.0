class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int start=0;
        int end = nums.size()-1;
        for(int i=start;i<=end;i++){
            if(nums[i]==0){
                for(int x=i;x<end;x++){
                    swap(nums[x],nums[x+1]);
                }
                end--;
                i--;//To revisit the element kyoki ho skta hai uski jgah koi non 0 element aagya ho :)
            }
        }

    }
};
