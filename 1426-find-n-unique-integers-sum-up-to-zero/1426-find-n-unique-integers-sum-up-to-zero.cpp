class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int> v;
        if(n%2==0)
        {
            int x=n/2;
            while(x>0)
            {
                v.push_back(x);
                v.push_back(-x);
                x--;
            }
        }
        else
        {
            int x=n/2;
            v.push_back(0);
            while(x>0)
            {
            v.push_back(x);
            v.push_back(-x);
            x--;
            }
        }
        return v;
    }
};