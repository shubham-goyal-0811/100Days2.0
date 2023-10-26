class Solution {
public:
        int x=0;
    bool isPowerOfTwo(int n) {

        if(pow(2,x)==n)
            return 1;
        if(n<pow(2,x))
            return 0;
        x++;
        return isPowerOfTwo(n);
        
    }
};
