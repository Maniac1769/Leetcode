class Solution {
public:
    bool checkPalindromeFormation(string a, string b) {
        return check(a, b) || check(b, a);
    }

private: bool check(string a, string b) {
        int left = 0, right = a.size() - 1;

        while (left < right && a[left] == b[right]) {
            ++left;
            --right;
        }

        return isPalindrome(a, left, right) || isPalindrome(b, left, right);
    }

private: bool isPalindrome(string s, int left, int right) {
        while (left < right && s[left] == s[right]) {
            ++left;
            --right;
        }

        return left >= right;
    }
};