class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        multimap<int,int,greater<int>>mpp;
        for(auto x:mp){
            mpp.insert({x.second, x.first});
        }
        vector<int>vp;
        int kt=k;
        for(auto x:mpp){
            if(k!=0){
            vp.push_back(x.second);
            k--;
            }
        }
        return vp;
    }
};
