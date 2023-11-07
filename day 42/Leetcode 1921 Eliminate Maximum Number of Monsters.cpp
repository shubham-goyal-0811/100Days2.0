class Solution {
public:
    int eliminateMaximum(vector<int>& dist, vector<int>& speed) {
        int n = dist.size();
        vector<int> kitnatime(n);
        for(int i = 0;i<n;i++){
            kitnatime[i] = ((dist[i]+speed[i]-1)/speed[i]);
        }
        sort(kitnatime.begin(),kitnatime.end());
        int count = 0;
        for(int i = 0;i<kitnatime.size();i++){
            if(kitnatime[i]>i){
                count++;
            }
            else{
                break;
            }
        }
        return count;
    }
};
