class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> map;
        vector<int> ans;
        for(int num:nums)
        {
            map[num]++;
        }
         vector<pair<int,int>>v;
        for(auto it:map)
        {
            v.push_back(make_pair(it.second,it.first));
        }
        sort(v.rbegin(),v.rend());
        for(int i=0;i<v.size() && k!=0 ;i++)
        {
            ans.push_back(v[i].second);
            k--;
        }
        return ans;      
    }
};