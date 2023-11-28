class Solution {
public:
    int divide(int n , int x){
        while(n%x==0){
            n/=x;
        }
        return n;
    }
    bool isUgly(int n) {
        if(n==0)
            return 0;
        n = divide(n,2);
        n = divide(n,3);
        n = divide(n,5);

        return n==1;
    }
};
