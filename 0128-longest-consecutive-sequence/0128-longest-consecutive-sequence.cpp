class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() == 0){
            return 0;
        }
        if(nums.size() == 1){
            return 1;
        }
        sort(nums.begin(),nums.end());
        int maxLen = 0;
        int len = 1;
        int i = 0, j = 1;
        while(i<j && j<nums.size()){
            if(nums[i] == nums[j]){
                i++; j++;
                continue;
            }
            else if(nums[j] != nums[i]+1){
                maxLen = max(maxLen,len);
                len = 1;
            }
            else{
                len++;
            }
            i++; j++;
        }
        maxLen = max(maxLen,len);
        return maxLen;
    }
};