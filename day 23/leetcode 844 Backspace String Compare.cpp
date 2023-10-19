class Solution {
public:

    //TIME COMPLEXITY - O(M+N) same is the space complexity :(
    //Needs to be more optimized and will be optimized
    bool backspaceCompare(string s, string t) {
        string s1="";
        string t1="";
        int i=0;
        while(s[i]!='\0'){
            if(s[i]>='a' and s[i]<='z'){
                s1.push_back(s[i]);
            }
            else if(!s1.empty()){
                s1.pop_back();
            }
            i++;
        }
        i=0;
        while(t[i]!='\0'){
            if(t[i]>='a' and t[i]<='z'){
                t1.push_back(t[i]);
            }
            else if(!t1.empty()){
                t1.pop_back();
            }
            i++;  
        }
        if(s1.compare(t1)){
            return false;
        }
        else
            return true;
    }
};
