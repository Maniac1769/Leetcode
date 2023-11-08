class Solution {
public:
    // time/space: O(n)/O(n)
    vector<string> getWordsInLongestSubsequence(int n, vector<string>& words, vector<int>& groups) {
        vector<string> result;
        int target_group = groups[0];
        for (int i = 0; i < n; i++) {
            if (target_group != groups[i]) continue;
            result.push_back(words[i]);
            target_group = (target_group + 1) & 1;
        }
        return result;
    }
};