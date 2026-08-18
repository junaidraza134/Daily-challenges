class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        int n=nums.size();
        unordered_map<int,int> mp;
        unordered_map<int,int> freq;
        int r=0;
        int l=0;
        while(r<n){
            mp[nums[r]]++;
            if(r-l+1==k){
                for(auto it:mp){
                    freq[it.first]++;
                }
                mp[nums[l]]--;
                if(mp[nums[l]]==0){
                    mp.erase(nums[l]);
                }
                l++;
            }
            r++;
        }
        int maxx=-1;
        for(auto it:freq){
            if(it.second==1){
                maxx=max(maxx,it.first);
            }
        }
        return maxx;
       
        
        
    }
};