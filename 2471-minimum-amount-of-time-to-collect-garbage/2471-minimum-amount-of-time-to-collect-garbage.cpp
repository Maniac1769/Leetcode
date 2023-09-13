class Solution {
public:
    int garbageCollection(vector<string>& garb, vector<int>& t) {
        int m=-1,p=-1,g=-1,ans=0,Tsum=0;
        for(int i=0;i<garb.size();i++){
            if (garb[i].find('M') != string::npos){m=i;}
            if (garb[i].find('G') != string::npos){g=i;}
            if (garb[i].find('P') != string::npos){p=i;}
            ans+=garb[i].size();
        }
        for(int i=1;i<garb.size();i++){
            Tsum+=t[i-1];
            if(m==i){ans+=Tsum;}
            if(g==i){ans+=Tsum;}
            if(p==i){ans+=Tsum;}
        }
        return ans;
    }
};