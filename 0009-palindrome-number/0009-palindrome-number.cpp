class Solution {
public:
    bool isPalindrome(int x) {
        int a = x;
        long sum = 0;
        for(int i = 0; x > 0; x = x / 10){
            sum = sum*10 + x%10;
            i++;
        }

        if(sum == a){
            return true;
        }else{
            return false;
        }
        
    }
};