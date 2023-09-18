class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        int m= nums1.size();
        int n= nums2.size();
        int arr[2001]={0};
        vector<vector<int>> answer(2);
        for(int i=0;i<m;i++){
            arr[nums1[i]+1000]+=10;
        }
        for(int i=0;i<n;i++){
            arr[nums2[i]+1000]--;
        }
        for(int i=0;i<2001;i++){
            if(arr[i]%10==0&&arr[i]!=0){
                answer[0].push_back(i-1000);
            }
            if(arr[i]<0){
                answer[1].push_back(i-1000);
            }
        }
        return answer;
    }
};