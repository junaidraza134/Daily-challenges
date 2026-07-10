class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        sort(piles.begin(),piles.end());
        int n=piles.size();
        int l=1;
        int high=piles.back();
        int minn=0;
        while(l<=high){
            int mid=(l+high)/2;
            double sum=0;
            for(int i=0;i<n;i++){
                sum+=(piles[i]+mid-1)/mid;
            }
            if(sum<=h){
                minn=mid;
                high=mid-1;
                
            }else{
            l=mid+1;
            }
        }
        return minn;
            
           
    }
};