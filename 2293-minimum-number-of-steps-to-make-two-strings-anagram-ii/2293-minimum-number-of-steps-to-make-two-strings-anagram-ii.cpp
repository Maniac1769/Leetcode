class Solution {
public:
    int minSteps(string s, string t) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL) ;
        cout.tie(NULL);
        
        unordered_map<char, int> m1;
        int n = s.size(), m = t.size();

        for(int i=0; i<n; i++) m1[s[i]]++;
        for(int i=0; i<m; i++) m1[t[i]]--;

        int ans = 0;
        for(auto it: m1){
            ans += abs(it.second);
        }
        return ans;
    }
};