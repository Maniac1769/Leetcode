class Solution {
public:
    int dominantIndex(vector<int>& nums) {
    


    int t=0,mx=INT_MIN;
    for(int i=0;i<nums.size();i++)
    {
      if(nums[i]>mx)
      {
        mx=nums[i];
        t=i;
      }
    }
      for(auto i: nums)
      {
        if(i!=mx&& (i*2)>mx)
        return -1;
      }
      return t ;
    } 
};