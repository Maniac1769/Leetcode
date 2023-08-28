class Solution {
public:
    int mostFrequent(vector<int>& nums, int key) {
        
        unordered_map<int, int> mp;
        int maxVal=INT_MIN, index=-1;

        for(int i=0;i<nums.size()-1;i++)
            if(nums[i]==key)
                mp[nums[i+1]]++;
              
        for(auto iter:mp)
            if(maxVal<iter.second){
                maxVal=iter.second;
                index=iter.first;
            }
        
        return index;
    }
};