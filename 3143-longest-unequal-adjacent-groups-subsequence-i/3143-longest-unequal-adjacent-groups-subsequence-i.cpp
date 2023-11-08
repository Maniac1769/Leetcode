class Solution {
public:
    vector<string> getWordsInLongestSubsequence(int n, vector<string>& words, vector<int>& groups) {
        vector<string>ans;
        int t=groups[0];
        ans.push_back(words[0]);
        for(int i=1;i<n;i++)
        {
            if(groups[i]!=t)
            {
                t=groups[i];
                ans.push_back(words[i]);
            }
        }
        return ans;
    }
};