class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0) return 0;
        set<int>st;
        for(int i = 0; i<nums.size(); i++)
        {
            st.insert(nums[i]);
        }

        int ans = 0;
        int cnt = 0;
        for(auto it:st)
        {
            if(st.find(it+1) != st.end())
            {
                cnt ++;
            }
            else
            {
                cnt = 0;
            }
            ans = max(ans, cnt);
        }
        return ans+1;
    }
};