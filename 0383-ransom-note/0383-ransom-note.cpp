class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int arr[127]{};
        for (char ch : magazine){
            arr[(int)ch] += 1;
        }
        for (char ch : ransomNote){
            int& count = arr[(int)ch];
            count--;
            if (count < 0){
                return false;
            }
        }
        return true;
    }
};