class Solution {
public:
    int longestString(int x, int y, int z) {
        int ans;
        ans = (x<y)?x:y;
        if(x==y){
            return (x+y+z)*2;
        }
        return (ans+ans+1+z)*2;
    }
};
