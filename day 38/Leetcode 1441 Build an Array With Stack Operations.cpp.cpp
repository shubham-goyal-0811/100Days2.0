class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        int t = target.size();
        int j=0;//Index of element that was pushed :)
        vector<string> ans;
        for(int i=1;i<=n;i++){ //Here is my stream from 1 to n
            if(j>=t)
                break;
            if(i==target[j]){
                ans.push_back("Push");
                j++;
            }
            else{
                ans.push_back("Push");
                ans.push_back("Pop");
            }
        }
        return ans;
    }
};