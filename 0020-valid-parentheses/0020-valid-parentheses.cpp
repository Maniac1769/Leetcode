class Solution {
public:
    bool isValid(string s) {

        int n = s.size();
        if(n==1  || n==0) return false;
        string str = "";

        for(int i=0;i<s.size();i++)
        {   
            str += s[i];
            if(str.size()>1 && str[str.size()-2]=='(' && s[i]==')'){ 
                str.pop_back();
                str.pop_back();
            }
            else if(str.size()>1 && str[str.size()-2]=='{' && s[i]=='}'){ 
                str.pop_back();
                str.pop_back();
            }
            else if(str.size()>1 && str[str.size()-2]=='[' && s[i]==']'){ 
                str.pop_back();
                str.pop_back();
            }
        }
        return str.size()==0;
    }
};