// Companies :  Amazon Google
// Sliding window (Two pointers)
// Tc-O(n), SC-O(1)

class Solution {
public:
    int characterReplacement(string s, int k) {
        int n = s.length();
        int left = 0, right = 0;
        
        vector<int> freq(26, 0);  // stores char frequency
        int maxFreq = 0;
        int maxLen = 0;

        while(right < n) {
            freq[s[right] - 'A']++;  // increment frequency
            maxFreq = max(maxFreq, freq[s[right] - 'A']);  // update maxFreq
            
            // when changes required is > k
            if(( (right-left+1) - maxFreq ) > k){   // *** Remark , we use if instead of while as its more efficient
                freq[s[left] - 'A']--;
                maxFreq = 0;
                for(int i=0; i<26; i++){
                    maxFreq = max(maxFreq, freq[i]);
                }
                left++;
            }

            if( (right-left+1) - maxFreq  <=  k){
                maxLen = max(maxLen, right-left+1);
            }

            right++;
        }

        return maxLen;
    }
};

/*
*** Remark :
the key difference in time complexity lies in how the maximum frequency is updated during the shrinking of the window. Approach 1 -> 'using while' has a quadratic time complexity(O(n^2)) due to recalculating the maximum frequency in each iteration of the while loop, while Approach 2 -> 'using if' has a linear time complexity(O(n)) since it updates the maximum frequency more efficiently. Approach 2 is more efficient in terms of time complexity.
*/