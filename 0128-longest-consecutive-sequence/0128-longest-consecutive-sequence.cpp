class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0)
        return 0;
        int cnt=1;
        int maxcnt=1;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i+1]-nums[i]==1)
            cnt++;
            else if(nums[i+1]-nums[i]==0)
            continue;
            else
            cnt=1;
            maxcnt=max(maxcnt,cnt);
        }
        return maxcnt;
    }
};