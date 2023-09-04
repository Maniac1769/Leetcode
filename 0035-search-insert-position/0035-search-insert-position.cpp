class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int s = 0;
        int e = nums.size()-1;

        while(s <= e) {
            
            // if array first element is > target
            if(nums[s] > target)
                return s;
            
            // if array last element is < target
            if(nums[e] < target)
                return e+1;

            // finding mid
            int mid = s+(e-s)/2;

            if(nums[mid] == target)
                return mid;

            
            // nums = [1,3], target = 2
            else if(nums[mid] < target)
                s = mid+1;  // move to line 10
                
            // nums = [1,3,5,6], target = 2
            else if(nums[mid] > target)
                e = mid - 1; // move to line 14
            
        }
        return -1;
    }
};