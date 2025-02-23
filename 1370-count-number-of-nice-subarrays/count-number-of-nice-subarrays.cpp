class Solution {
public:
    int f(vector<int>& nums, int k)
    {
        int l = 0, r = 0,cnt = 0, oddcount = 0, n = nums.size();
        while(r < n)
        {
            if(nums[r]%2 == 1) cnt++;
            while(cnt > k)
            {
                if(nums[l]%2 == 1) cnt--;
                l++;
            }

            oddcount += r - l + 1;
            r++;
        }

        return oddcount;
    }
    int numberOfSubarrays(vector<int>& nums, int k) {
        return f(nums, k) - f(nums, k - 1);
    }
};