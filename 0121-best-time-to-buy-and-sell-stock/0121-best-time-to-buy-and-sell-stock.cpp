class Solution {
public:
    int maxProfit(vector<int>& prices) {
        ios::sync_with_stdio(false);
    //     int n = prices.size(), ma=prices[n-1], ans=0;

    //     for(int i=n-2; i>=0; i--){
    //        if(ma-prices[i] > ans){
    //            ans = ma-prices[i];
    //         }
    //         ma = max(ma, prices[i]);
    //     }
    // return ans;

    int n = prices.size();
    int ans=0;
        int mmin =prices[0];
        for(int i=1; i<n; i++){
            mmin = min(mmin, prices[i]);
            ans = max(ans, prices[i]-mmin);
        }
        return ans;
    }
};