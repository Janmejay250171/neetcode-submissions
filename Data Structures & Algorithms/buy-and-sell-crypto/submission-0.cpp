class Solution {
public:
    int maxProfit(vector<int>& prices) {
        vector<int>pr(prices.size(),0);
        int n=prices.size();
        pr[n-1]=prices[n-1];
        for(int i=n-2;i>=0;i--){
            pr[i]=max(prices[i],pr[i+1]);
        }
        int mx=0;
        for(int i=0;i<prices.size();i++){
            mx=max(abs(prices[i]-pr[i]),mx);
        }
        return mx;
    }
};