class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        unordered_map<int,int>mpp;
        mpp[0]=1;
        int presum=0,cnt=0;

        for(int i=0;i<nums.size();i++)
        {
            presum+=nums[i];
            int complement=presum-goal;
            cnt+=mpp[complement];
            mpp[presum]++;

        }
        return cnt;
    }
};