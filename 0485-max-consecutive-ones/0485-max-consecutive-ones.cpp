class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n=nums.size();
        int i=0;
        int j=0;
        int len=0;
        while(j<n){
            if(nums[j]==1){
                len=max(len,j-i+1);
            }else{
                i=j+1;
            }
            j++;
        }
        return len;
        
    }
};