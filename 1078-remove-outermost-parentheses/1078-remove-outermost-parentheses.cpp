class Solution {
  public: string removeOuterParentheses(string s) {
    string str;
    int c = 0;
    for (int i = 0; i < s.size(); i++) {
      if (c == 0) {
        c--;
        continue;
      }
      if (s[i] == '(') c--;
      else c++;
      if (c == 0) continue;
      str.push_back(s[i]);
    }
    return str;
  }
};