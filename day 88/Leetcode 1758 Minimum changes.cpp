class Solution {
public:
    int count(string s, char curr){
        int count = 0;
        for(int i =1;i<s.length();i++){
            char cc=s[i];
            if(cc == curr){
                count++;
                curr = curr =='0'?'1':'0';
            }
            else{
                curr = cc;
            }

        }
        return count;
    }
    int minOperations(string s) {
        int count1,count2;
        char curr = s[0];
        count1 = count(s,curr);
        count2 = count(s,curr=='0'?'1':'0') + 1;
        return min(count1,count2);
    }
};