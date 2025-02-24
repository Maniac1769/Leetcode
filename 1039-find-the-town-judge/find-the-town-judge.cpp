class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<int> trustCount(n + 1, 0);

        for (auto& t : trust) {
            trustCount[t[0]]--; // Decrease for those who trust someone
            trustCount[t[1]]++; // Increase for those who are trusted
        }

        for (int i = 1; i <= n; i++) {
            if (trustCount[i] == n - 1) return i; // Judge is trusted by everyone except themselves
        }

        return -1;
    }
};