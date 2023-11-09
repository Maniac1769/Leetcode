class Solution {
public:
    bool func(int ind, vector<int>& arr, vector<int>& vis){
        if(ind >= arr.size() || ind < 0) return false;
        if(vis[ind] == 1) return false;
        if(arr[ind] == 0) return true;
        vis[ind] = 1;
        return func(ind+arr[ind], arr, vis) | func(ind-arr[ind], arr, vis);
    }
    bool canReach(vector<int>& arr, int start) {
        vector<int> vis(arr.size(), 0);
        return func(start, arr, vis);
    }
};