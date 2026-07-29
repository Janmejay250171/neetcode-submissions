class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>mp;
        unordered_map<int,int>m;
        for(int i=0;i<nums.size();i++){
            if(mp[target-nums[i]]){
                return {m[target-nums[i]],i};
            }
            m[nums[i]]=i;
            mp[nums[i]]+=1;
        }
        return {0,0};
    }
};
