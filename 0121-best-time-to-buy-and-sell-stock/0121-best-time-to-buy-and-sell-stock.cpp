class Solution {
public:
    int maxProfit(vector<int>& prices) {
        // int result = INT_MIN;
        // for(int i=0; i<prices.size()-1; i++){
        //     for(int j=i+1; j<prices.size(); j++){
        //         int profit = prices[j]-prices[i];
        //         if(profit>result){
        //             result = profit; 
        //         }
        //     }
        // }
        // if(result<=0){
        //     return 0;
        // }else
        // return result;


        int minprice = prices[0];
        int profit = 0;

        for(int i=1; i<prices.size(); i++){
            if(profit<prices[i] - minprice){
                profit = prices[i] - minprice;
            }

            if(minprice>prices[i]){
                minprice = prices[i];
            }

        }
        return profit;
    }
};