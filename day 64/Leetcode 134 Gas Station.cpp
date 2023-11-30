class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int n = gas.size();
        bool flag = 1;
        int totgas = 0;
        int totcost = 0;
        int gascurr=0;
        int start=0;
        for(int i=0;i<n;i++){
            totgas+=gas[i];
            totcost+=cost[i];
            gascurr+=gas[i]-cost[i];

            if(gascurr<0){
                start=i+1;
                gascurr=0;
            }
        }
        if(totgas<totcost){
            return -1;
        }
        return start;

    }
};