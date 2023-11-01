class Solution {
public:
    void inorder(TreeNode*root,vector<int> &vis){
        if(root==NULL)
            return;
        inorder(root->left,vis);
        vis.push_back(root->val);
        inorder(root->right,vis);
    }
    vector<int> findMode(TreeNode* root) {
        vector<int> vis;
        inorder(root,vis);
        unordered_map<int,int> mpp;
        int maxfreq=0;
        vector<int> ans;
        for(auto x : vis){
            mpp[x]++;
        }
        for(auto x: mpp){
            if(x.second>=maxfreq)
                maxfreq=x.second;
        }
        for(auto it : mpp){
            if(it.second==maxfreq)
                ans.push_back(it.first);
        }
        return ans;
    }
};