class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        set<int> st(nums.begin(), nums.end());
        int n=nums.size();
        int a=*min_element(nums.begin(),nums.end());
        int b=*max_element(nums.begin(),nums.end());
        vector<int> res;
        for(int i=a;i<=b;i++){
            if(st.find(i)==st.end()){
                res.push_back(i);
            }
        }
        return res;
        
    }
};