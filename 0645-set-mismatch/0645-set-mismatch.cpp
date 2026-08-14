class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
        vector<int> res;
       for(int i=1;i<=n;i++){
            if(mp[i]==2){
                res.push_back(i);
            }
       }
        for(int i=1;i<=n;i++){
            if(mp[i]==0){
                res.push_back(i);
            }
        }
        return res;
        
    }
};