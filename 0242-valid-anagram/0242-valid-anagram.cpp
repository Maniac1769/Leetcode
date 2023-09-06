class Solution {
public:
    bool isAnagram(string s, string t) {
        int n=s.length();
        int m=t.length();
        if(m!=n)
        return false;
        else
        {
            vector<int>visited(26,0);
            for(int i=0;i<n;i++)
            {
                visited[s[i]-'a']++;
                visited[t[i]-'a']--;
            }
            for(int i=0;i<26;i++)
            {
                if(visited[i]!=0)
                return false;
            }
        }
        return true;
    }
};