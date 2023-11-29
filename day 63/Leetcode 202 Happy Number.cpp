class Solution {
public:
    int sumOfDigit(int n){
        int ans=0;
        while(n){
            ans+=(n%10)*(n%10);
            n/=10;
        }
        return ans;
    }
    bool isHappy(int n) {
        if(n==1){
            return 1;
        }
        set<int> s;
        while(true){
            if(n==1)
                return 1;
        
            n=sumOfDigit(n);

            if(s.find(n)!=s.end()){
                return 0;
            }
            s.insert(n);
        }
        return n==1;
    }
};
