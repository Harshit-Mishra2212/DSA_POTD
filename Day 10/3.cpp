//q-3: https://leetcode.com/problems/best-time-to-buy-and-sell-stock/description/ 
//Approach : if vector is decreasing then directly returned 0....if not then traversed in the vector and found minprice which is minimum of ith element of price and minprice which was initialised as int_max in the beginning...then found maxprofit by taking maximum of mxprice and price[i]-minprice where mxprice was initialised by 0 in beginning!
//TC : O(N)
//SC : O(1)
class Solution {
public:
    bool dec(vector<int>&prices){
        int n = prices.size();
        for(int i=0;i<n-1;i++){
            if(prices[i+1]>prices[i]) return false;
        }
        return true;
    }
    int maxProfit(vector<int>& prices) {
       int n = prices.size();
       if(dec(prices)) return 0;
        int minprice = INT_MAX;
        int mxprof = 0;
        for(int i=0;i<n;i++){
            minprice = min(minprice, prices[i]);
            mxprof = max(mxprof,prices[i]-minprice);
        }
        return mxprof;
    }
};