class Solution {
public:
// striver
void function(int ind,vector<int>& nums,vector<int>ds,vector<vector<int>>& ans){
    ans.push_back(ds);
    for(int i=ind;i<nums.size();i++){
        // if its not a first occourance and previous is equal to ith element
        if(i!=ind&&nums[i]==nums[i-1])continue;
        ds.push_back(nums[i]);
        function(i+1,nums,ds,ans);
        ds.pop_back();
    }
}
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>ds;
        sort(nums.begin(),nums.end());
        int n=nums.size();
        function(0,nums,ds,ans);
        return ans;
    }
};