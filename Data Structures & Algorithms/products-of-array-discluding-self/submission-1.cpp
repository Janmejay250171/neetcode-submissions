class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>pp=nums;
        vector<int>ss=nums;
        for(int i=1;i<pp.size();i++){
            pp[i]=pp[i]*pp[i-1];
        }        
        for(int i=ss.size()-2;i>=0;i--){
            ss[i]=ss[i]*ss[i+1];
        }
        vector<int>output(nums.size());
        output[0]=ss[1];
        output[nums.size()-1]=pp[nums.size()-2];
        for(int i=1;i<nums.size()-1;i++){
            output[i]=pp[i-1]*ss[i+1];
        }
        return output;
    }
};
