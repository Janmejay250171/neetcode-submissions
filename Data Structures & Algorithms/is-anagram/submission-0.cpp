class Solution {
public:
    bool isAnagram(string s, string t) {
        if(t.size()!=s.size())return false;
        unordered_map<char,int>sp;
        unordered_map<char,int>tp;
        int sn=s.size();int tn=t.size();
        set<char>si;
        set<char>ti;
        for(int i=0;i<sn;i++){
            si.insert(s[i]);
            sp[s[i]]++;
        }
        for(int i=0;i<tn;i++){
            ti.insert(t[i]);
            tp[t[i]]++;
        }
        if(si.size()!=ti.size()){
            return false;
        }
        for(auto x:si){
            if(sp[x]!=tp[x]){
                return false;
            }
        }
        return true;
    }
};
