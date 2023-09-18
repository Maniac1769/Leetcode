class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int,int> m;
        vector<int> v;
        v.push_back(-1);
        for(int i=0;i<arr.size();i++)
        {
            m[arr[i]]++;
        }
    for(auto it:m)
    {
        if(it.first==it.second)
        v.push_back(it.first);
    }
    return *max_element(v.begin(), v.end());
    }
};