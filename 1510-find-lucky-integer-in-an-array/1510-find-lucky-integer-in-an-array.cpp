class Solution {
public:
    int findLucky(vector<int>& arr) {
        int curr_max=-1;
        unordered_map<int,int> m;
        for(int i=0;i<arr.size();i++)
        {
            m[arr[i]]++;
        }
        for(auto &itr: m)
        {
            if(itr.first==itr.second)
                curr_max=max(itr.first,curr_max);
        }
    return curr_max;
    }
};