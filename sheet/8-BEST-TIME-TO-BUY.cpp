 int maxProfit(vector<int>& prices) {
        int ans=0;
        int n=prices.size();
        int minp=INT_MAX;
        for(int i=0;i<n;i++){
            minp=min(minp,prices[i]);
            
            int dif = max(prices[i]-minp,0);
            ans = max(ans,dif);
        }
        return ans;
    }