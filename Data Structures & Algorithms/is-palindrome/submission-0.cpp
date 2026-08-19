class Solution {
public:
    bool isPalindrome(string s) {
        vector<int>vp;
        int n=s.size();
        for(int i=0;i<n;i++){
            if((int(s[i])>=65 && int(s[i])<=90) || (int(s[i])>=97 && int(s[i])<=122)){
                if(int(s[i])>=97){
                    vp.push_back(int(s[i])-32);
                }
                else{
                    vp.push_back(int(s[i]));
                }
            }
            if(int(s[i])>=48 && int(s[i])<=57){
                vp.push_back(int(s[i]));
            }
        }
        vector<int>pv;
        for(int i=vp.size()-1;i>=0;i--){
            pv.push_back(vp[i]);
        }
        if(vp==pv){
            return true;
        }
        return false;
    }
};