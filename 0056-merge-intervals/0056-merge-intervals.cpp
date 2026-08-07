class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& nums) {
        int n=nums.size();
        sort(nums.begin(), nums.end());
       int start1=nums[0][0];
       int end1=nums[0][1];
       vector<vector<int>> res;
       for(int i=0;i<n;i++){
        int start2=nums[i][0];
        int end2=nums[i][1];
        if(end1>=start2){
            start1=start1;
            end1=max(end1,end2);
            continue;
        }
        res.push_back({start1,end1});
        start1=start2;
        end1=end2;
       }
       res.push_back({start1,end1});
       return res;
    }
};