class Solution {
public:
    int countElements(vector<int>& nums) {
        int count=0;
        int j=0;
        int maxi = *max_element(nums.begin(),nums.end());
        int mini = *min_element(nums.begin(),nums.end());
        while(j < nums.size())
        {
            if((nums[j] > mini) && (nums[j] < maxi)) count++;
            j++;
        }
        return count;
    }
};