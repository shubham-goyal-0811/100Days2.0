class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        int mini=INT_MAX;
        int secmin=INT_MAX;
        for(int i =0;i<prices.size();i++){
            if(mini > prices[i]){
                secmin=mini;
                mini=prices[i];
            }
            else if(prices[i]<secmin){
                secmin=prices[i];
            }
        }
        int kharcha = mini + secmin;
        if(kharcha > money){
            return money;
        }
        return money - (mini + secmin);



        return money;
    }
};