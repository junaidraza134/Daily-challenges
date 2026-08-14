class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        int m=nums.size();
        vector<int> res;
        int mid1=m/2;
        vector<int> first;
        vector<int> second;
        for(int i=0;i<mid1;i++){
           first.push_back(nums[i]);
        }
        for(int i=mid1;i<m;i++){
            second.push_back(nums[i]);
        }
        for(int i=0;i<n;i++){
            res.push_back(first[i]);
            res.push_back(second[i]);
        }
        return res;

        
    }
};