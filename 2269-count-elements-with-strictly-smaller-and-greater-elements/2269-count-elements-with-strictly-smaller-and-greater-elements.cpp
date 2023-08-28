class Solution {
public:
    int countElements(vector<int>& nums) {
        long long int c=0,curr_max=INT_MIN,curr_min=INT_MAX;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>curr_max)
            curr_max=nums[i];
            if(nums[i]<curr_min)
            curr_min=nums[i];
        }
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>curr_min && nums[i]<curr_max)
            {
                c++;
            }
        }
        return c;
    }
};