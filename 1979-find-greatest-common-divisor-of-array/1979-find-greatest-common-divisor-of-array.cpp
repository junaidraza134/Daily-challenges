class Solution {
public:
    int findGCD(vector<int>& nums) {
        int n=nums.size();
        int maxx=INT_MIN;
        int minn=INT_MAX;
        for(int i=0;i<n;i++){
            maxx=max(maxx,nums[i]);
            minn=min(minn,nums[i]);
        }
        return gcd(maxx,minn);
        
    }
};