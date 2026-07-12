class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n=nums.size();
        int left=0;
        int right=k;
        // double maxx=INT_MIN;
        double sum=0;
        for(int i=0;i<k;i++){
            sum+=nums[i];
        }
       double maxx=sum;
        while(right<n){
            sum-=nums[left];
            left++;
            sum+=nums[right];
            right++;
            maxx=max(maxx,sum);
        }
        double result=maxx/k;
        return result;
    }
};