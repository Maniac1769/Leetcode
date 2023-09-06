class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<int, int> m,r;
        if(s.length()==t.length())
        {
        for(int i=0;i<s.length();i++)
        {
            m[s[i]]++;
            m[t[i]]--;
        }
        for (auto x : m) {
            if (x.second != 0) {
                return false;
            }
        }
            return true;
        }
        else
            return false;
    }
};