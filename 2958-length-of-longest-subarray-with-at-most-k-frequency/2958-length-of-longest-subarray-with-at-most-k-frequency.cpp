class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int n=nums.size();
        unordered_map<int,int> mp;
        int left=0;
        int right=0;
        int maxx=0;
        while(right<n){
            mp[nums[right]]++;
            while(mp[nums[right]]>k){
                mp[nums[left]]--;
                if(mp[nums[left]]==0){
                    mp.erase(nums[left]);
                }
                left++;

            }
            maxx=max(maxx,right-left+1);
            right++;
        }
        return maxx;
        
    }
};