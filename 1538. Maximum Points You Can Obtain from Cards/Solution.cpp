class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int rsum=0,lsum=0;
        int n=cardPoints.size();
        for(int i=0;i<k;i++)
        {
            lsum+=cardPoints[i];
        }
        int mx=0;
        mx=lsum+rsum;
        int rindex=n-1;
        for(int i=k-1;i>=0;i--)
        {
            lsum-=cardPoints[i];
            rsum+=cardPoints[rindex];
            rindex--;
            mx=max(mx,lsum+rsum);
        }
        return mx;
    }
};