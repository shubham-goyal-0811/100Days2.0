class Solution {
public:
    void kaam(int start,int end,string ot,vector<string> &ans){
        if(start==0 and end==0){
            ans.push_back(ot);
            return;
        }
        if(start!=0){
            string o1= ot;
            o1.push_back('(');
            kaam(start-1,end,o1,ans);
        }
        if(end>start){
            string o1=ot;
            o1.push_back(')');
            kaam(start,end-1,o1,ans);
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        int start= n;
        int end= n;
        string output;
        kaam(start,end,output,ans);
        return ans;
    }
};
