class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        int currsum = 0;
        int maxsum = INT_MIN;
        for (int i=0;i<n;i++){
            currsum=currsum+nums[i];
            maxsum=max(maxsum,currsum);
            currsum=max(0,currsum);
        }
        return maxsum;
    }
};