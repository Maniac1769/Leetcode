class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        unordered_map<int,int>mpp;
        mpp[0]=1;
        int presum=0,cnt=0;

        for(int i=0;i<nums.size();i++)
        {
            presum+=nums[i]%2;
            int complement=presum-k;
            cnt+=mpp[complement];
            mpp[presum]++;

        }
    return cnt;
    }
};