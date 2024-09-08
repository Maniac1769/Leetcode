class Solution {
public:
    int totalFruit(vector<int>& fruits) 
    {
        int l=0,r=0,maxlen=0,len=0;
        int n=fruits.size();
        unordered_map <int,int> m;
        while(r<n)
        {
            m[fruits[r]]++;
            if(m.size()>2)
            {
                m[fruits[l]]--;
                if(m[fruits[l]]==0)
                    m.erase(fruits[l]);
                l++;
            }
            if(m.size()<=2)
            maxlen=max(maxlen,r-l+1);
            r++;
        }
        return maxlen;
    }
};