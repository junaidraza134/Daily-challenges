class Solution {
public:
    int maxScore(vector<int>& arr, int k) {
        int n=arr.size();
        int maxsum=0;
        int leftsum=0;
        int rightsum=0;
        for(int i=0;i<k;i++){
            leftsum+=arr[i];
        }
        maxsum=leftsum;
        int rightindx=n-1;
        for(int i=k-1;i>=0;i--){
            leftsum-=arr[i];
            rightsum+=arr[rightindx];
            rightindx--;
            maxsum=max(leftsum+rightsum,maxsum);
                
        }
          
        
        return maxsum;
        
    }
};