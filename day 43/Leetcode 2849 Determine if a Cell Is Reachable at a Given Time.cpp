class Solution {
public:
    bool isReachableAtTime(int sx, int sy, int fx, int fy, int t) {
        if(sx==fx and fy==sy)
            return t!=1;
        int ans = max(abs(fx-sx),abs(fy-sy));
        return ans<=t;
    }
};
