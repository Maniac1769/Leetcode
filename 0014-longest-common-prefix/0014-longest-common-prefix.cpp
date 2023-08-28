class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size();
        string output;
        bool flag = true;
        for(int i = 0; i < strs[0].size(); i++) {
            for(int j = 0; j < n-1; j++) {
                if(strs[j][i] != strs[j+1][i]) {
                    flag = false;
                    break;
                }
            }
            if(flag == true) {
                output.push_back(strs[0][i]);
            }
            if(flag == false) {
                break;
            }
        }
        return output;
    }
};