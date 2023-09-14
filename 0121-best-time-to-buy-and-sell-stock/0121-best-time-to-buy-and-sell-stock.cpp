class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mx=0;
        int mp=INT_MAX;
        for(int i=0;i<prices.size();i++){
            mp=min(mp,prices[i]);
            mx=max(mx,prices[i]-mp);
        }
        return mx;
    }
};