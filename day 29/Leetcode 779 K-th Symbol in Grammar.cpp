class Solution {
public:
    int kthGrammar(int n, int k) {
        if(n==1)
            return 0;
        k--;
        int cnt=0;
        while(k){
            cnt+=k&1;
            k>>=1;
       }
       return cnt%2;
    }
};//Leetcode++
