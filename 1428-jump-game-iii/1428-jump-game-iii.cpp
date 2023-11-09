class Solution {
public:
    bool solve(vector<int>& arr, int s, vector<bool>&vis){
        if(s<0 || s>arr.size()-1 || vis[s]){
            return 0;
        }

        if(arr[s]==0){
            return 1;
        }

        vis[s]=true;
        return solve(arr,s+arr[s],vis)||solve(arr,s-arr[s],vis);
    }
    bool canReach(vector<int>& arr, int s) {
        vector<bool>vis(arr.size(),false);
        return solve( arr, s,vis);
    }
};