class Solution {
public:
    int trap(vector<int>& height) {
        if(height.size() <= 2)
            return 0;
        int ans = 0;
        int n = height.size();
        vector<int> left(n,0);
        vector<int> right(n,0);
        left [0] = height[0];
        for(int i=1;i<height.size();i++){
            left[i]=max(left[i-1],height[i]);
        }
        right[n-1]=height[n-1];
        for(int i=n-2;i>=0;i--){
            right[i]=max(right[i+1],height[i]);
        }
        for(int i =0;i<n;i++){
            ans+= left[i]<right[i]?(left[i]-height[i]):(right[i]-height[i]);
        }
        return ans;
    }
};
