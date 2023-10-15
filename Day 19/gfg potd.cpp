class Solution{
    
    public:
    Node* treebnate(vector<int> &ans,int start,int end){
        if(start>end){
            return NULL;
        }
        int mid = (start+end)/2;
        Node *root = new Node(ans[mid]);
        root->left = treebnate(ans,start,mid-1);
        root->right = treebnate(ans,mid+1,end);
        return root;
    }

    void inorder(Node* root,vector<int> &ans){
        if(root==NULL){
            return;
        }
        inorder(root->left,ans);
        ans.push_back(root->data);
        inorder(root->right,ans);
    }

    // Your are required to complete this function
    // function should return root of the modified BST
    Node* buildBalancedTree(Node* root)
    {
    	// Code here
    	vector <int> ans;
    	inorder(root,ans);
    	root = treebnate(ans,0,ans.size()-1);
    	return root;
    	
    }
};