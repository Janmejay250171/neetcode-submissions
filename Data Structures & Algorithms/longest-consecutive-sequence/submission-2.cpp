class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]=1;
        }
        int ptr=0;
        if(nums.size()==0){
            return 0;
        }
        int tt=1;
        // for(auto x:mp){
        //     ptr=x.first;
        //     break;
        // }
        int uu=0;
        int maxi=0;
        for(auto x:mp){
            if(uu==0){
                ptr=x.first;
                uu+=1;
            }
            else if(uu==1){
                if(x.first==ptr+1){
                    tt++;
                    ptr=x.first;
                    maxi=max(maxi,tt);
                }
                else{
                    maxi=max(maxi,tt);
                    tt=1;
                    ptr=x.first;
                }
            }
        }
        maxi=max(maxi,tt);
        return maxi;
    }
};
