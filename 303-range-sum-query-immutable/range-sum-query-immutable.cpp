class NumArray {
public:
    vector<int> v;
    
    // Constructor to initialize the prefix sum array
    NumArray(vector<int>& nums) {
        int n = nums.size();
        v.resize(n + 1, 0);  // Resize the array with n+1 elements, all initialized to 0
        for (int i = 0; i < n; i++) {
            v[i + 1] = v[i] + nums[i];  // Calculate the prefix sum
        }
    }
    
    // Function to compute the sum of elements from left to right
    int sumRange(int left, int right) {
        return v[right + 1] - v[left];  // Get the sum from prefix sum array
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left, right);
 */