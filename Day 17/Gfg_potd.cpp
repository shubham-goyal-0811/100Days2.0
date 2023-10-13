class Solution{

public:
    int floor(Node* root, int x) {
        int ans = -1;
        while(root){
           if(root->data==x){
               ans=root->data;
               return ans;
           }
           if(x < root->data){
               root = root->left;
           }else{
               ans = root->data;
               root=root->right;
           }
       }
       return ans;
    }
};