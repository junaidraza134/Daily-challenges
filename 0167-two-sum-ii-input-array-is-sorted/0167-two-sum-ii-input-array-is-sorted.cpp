class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++){
            mp[nums[i]]=i+1;
        }
        vector<int> res;
        for(int i=0;i<n;i++){
            int rem=target-nums[i];
            if(mp.find(rem)!=mp.end() && mp[rem]!=i+1){
                res.push_back(i+1);
                res.push_back(mp[rem]);
                
                return res;
            }
        }
        return res;

        
    }
};