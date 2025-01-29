class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        if(n==0) return 0;
        set <int> s;
        for(int i=0;i<nums.size();i++)
        {
            s.insert(nums[i]);
        }
        int longest=1;
        for (auto it:s)
        {
            int x=it;
            int cnt=0;
            if (s.find(it - 1) == s.end()) {
            //find consecutive numbers:
            int cnt = 1;
            int x = it;
            while (s.find(x + 1) != s.end()) {
                x = x + 1;
                cnt = cnt + 1;
            }
            longest = max(longest, cnt);
            }   
        }
        return longest;
    }
};