//121. Best Time to Buy and Sell Stock
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        //can we just not compare every value 
        //and find the maximum among these when required 
        // int mp=0;
        // for(int i=0;i<prices.size();i++){
        //     int cs=0;
        //     for(int j=i;j<prices.size();j++){
        //         if(prices[j]>prices[i]){
        //             cs=prices[j]-prices[i];
        //             mp=max(mp,cs);.//////////////////////TLEEEEEEEEEEEEEE
        //         }
        //     }
        // }
        // return mp; .
        int n=prices.size(); 
        int minimum_price=prices[0]; 
        int maxProfit=0;
        for(int i=0;i<n;i++){
            minimum_price=min(minimum_price, prices[i]);
            maxProfit=max(maxProfit, prices[i]-minimum_price);
        }
        return maxProfit; 

    }
};