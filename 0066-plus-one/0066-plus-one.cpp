class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int> ans;
        int n = digits.size();
        int temp;
        int carry = 1;
        for(int i=n-1; i>=0; i--){
            temp = digits[i]+carry;
            carry = temp/10;
            temp %= 10;
            ans.push_back(temp);
        }
        if(carry==1) ans.push_back(carry);
        reverse(ans.begin(), ans.end());
        return ans;
    }
};