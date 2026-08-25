class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        int n=nums.size();
        int m=*max_element(nums.begin(),nums.end());
        int s=*min_element(nums.begin(),nums.end());
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
        int mul=k;
        while(mp.find(mul)!=mp.end()){
            mul+=k;
        }
        return mul;
       
        
    }
};