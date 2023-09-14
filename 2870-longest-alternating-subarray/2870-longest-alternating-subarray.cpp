class Solution {
public:
    int alternatingSubarray(vector<int>& nums) {
        int ans = 0;
        
        for(int i = 0; i < nums.size(); i++) {
            int diff = 1;
            for(int j = i+1; j < nums.size(); j++) {
                if(nums[j] - nums[j-1] == diff) {
                    ans = max(ans, j-i+1);
                } 
                else {
                    break;
                }
                diff = -diff;
            }
        }
        
        if(ans == 0)
            return -1;
        return ans;
    }
};