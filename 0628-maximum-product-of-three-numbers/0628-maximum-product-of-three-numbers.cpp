class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int maxx=INT_MIN;
        int res1=nums[n-1]*nums[n-2]*nums[n-3];
        int res2=nums[0]*nums[1]*nums[n-1];
        maxx=max(res1,res2);
        return maxx;
    }
};