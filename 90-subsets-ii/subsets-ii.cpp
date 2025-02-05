class Solution {
public:

    void helper(vector<int> nums, int i, vector<int> & current, vector<vector<int>> &result) {
        int n = nums.size();
        if(i==n) {
            result.push_back(current);
            return;
        }

        current.push_back(nums[i]);
        helper(nums, i+1, current, result);
        current.pop_back();
        while(i+1<n && nums[i] == nums[i+1]) {
            i++;
        }
        helper(nums, i+1, current, result);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> result;
        vector<int> current;
        sort(nums.begin(), nums.end());
        helper(nums, 0, current, result);
        return result;
    }
};