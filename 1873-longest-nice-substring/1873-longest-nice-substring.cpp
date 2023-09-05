class Solution {
public:
    string longestNiceSubstring(string s) {
     if(s.size()<2){
         return "";
     }
     int n=s.size();
     int i=0;
     bool valid=true;
     for(;i<n;i++){
         if(islower(s[i]) && s.find(toupper(s[i]))==string::npos){
             valid=false;
             break;
         }
         else if(isupper(s[i])&& s.find(tolower(s[i]))==string::npos){
             valid=false;
             break;
         }
     }
     if(valid){
         return s;
     }
     else{
         string left=longestNiceSubstring(s.substr(0,i));
         string right=longestNiceSubstring(s.substr(i+1));
         int l=left.size();
         int r=right.size();
         if(l>=r){
             return left;
         }
         else{
             return right;
         }
     }    
    
    }
};