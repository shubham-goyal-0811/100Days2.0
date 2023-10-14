class Solution
{
    public:
     void inorder(Node* root, map<int,int>&m) {
        if(!root) {    
            return;
        }
        inorder(root->left,m);
        m[root->data]++;
        inorder(root->right,m);
    }

    void commonNodes(Node*root, map<int,int>&nodesInTree1, vector<int>&ans) {
        if(!root) {
            return;
        }
        if(nodesInTree1[root->data] > 0) {
            ans.push_back(root->data);
            nodesInTree1[root->data]--;
        }
        commonNodes(root->left,nodesInTree1,ans);
        commonNodes(root->right,nodesInTree1,ans);
    }

    //Function to find the nodes that are common in both BST. 
    vector <int> findCommon(Node *root1, Node *root2)
    {
     //Your code here
        vector<int>ans;
        map<int,int>nodesInTree1;
        inorder(root1,nodesInTree1);
        commonNodes(root2,nodesInTree1, ans);
        sort(ans.begin(),ans.end());
        return ans;

    }
};
