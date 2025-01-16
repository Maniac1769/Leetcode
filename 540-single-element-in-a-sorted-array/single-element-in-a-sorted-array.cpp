class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int num=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            num=num^nums[i];
        }
        return num;
    }
};