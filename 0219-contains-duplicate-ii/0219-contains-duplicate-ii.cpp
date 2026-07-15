class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int n=nums.size();
        unordered_map<int,int> mp;
        int left=0;
        int right=0;
        while(right<n){
            mp[nums[right]]++;
            if(mp[nums[right]]>1) return true;
            while(right-left>=k){
                mp[nums[left]]--;
                if(mp[nums[left]]==0){
                    mp.erase(nums[left]);
                }
                left++;
            }
             right++;
        }
        return false;
           
        }

        
    
};