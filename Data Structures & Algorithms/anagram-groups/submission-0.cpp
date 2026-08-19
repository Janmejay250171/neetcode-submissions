class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n=strs.size();
        unordered_map<string,vector<int>>mp;
        vector<vector<string>>vs;
        for(int i=0;i<n;i++){
            string p=strs[i];
            sort(p.begin(),p.end());
            mp[p].push_back(i);
        }
        for(auto x:mp){
            vector<string>vv;
            for(int i=0;i<x.second.size();i++){
                vv.push_back(strs[x.second[i]]);
            }
            vs.push_back(vv);
        }
        return vs;
    }
};