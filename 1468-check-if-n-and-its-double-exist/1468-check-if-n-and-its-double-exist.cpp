class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
     map <int,int> mp;
     for(int i = 0;i<arr.size();i++){
         int val1 = arr[i] * 2;
         int val2;
         if(arr[i] % 2 == 0){
             val2 = arr[i] / 2;
         }
         if((mp.count(val1) != 0) || (mp.count(val2) != 0)){
             return true;
             break;
         }
         mp[arr[i]]++;
     }
     return false;
    }
};