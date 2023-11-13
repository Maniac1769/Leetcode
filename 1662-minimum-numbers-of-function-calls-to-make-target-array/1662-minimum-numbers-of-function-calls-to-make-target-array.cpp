class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n=nums.size();
        int cnt=0;
        int maxi=0;
        for(int i=0;i<n;i++){
            int res=0;
            while(nums[i]>0){
                if(nums[i]%2==1){
                    nums[i]--;
                    cnt++;
                }
                while(nums[i]%2==0 and nums[i]>0){
                    nums[i]/=2;
                    res++;
                }
            }
            maxi=max(maxi,res);
        }
        return cnt+maxi;
    }
};