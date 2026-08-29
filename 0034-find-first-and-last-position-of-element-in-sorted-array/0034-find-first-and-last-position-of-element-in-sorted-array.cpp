class Solution {
public:
    vector<int> searchRange(vector<int>& arr, int target) {
        int n=arr.size();
        int l=0;
        int h=n-1;
        vector<int> res(2,-1);
        if(n==0) return res;
        while(l<=h){
            int mid=(l+h)/2;
            if(arr[mid]==target){
                int i=mid;
                int j=mid;
                while(i>0 && arr[i-1]==target){
                    i--;
                }
                while(j<n-1 && arr[j+1]==target){
                    j++;
                }
                res[0]=i;
                res[1]=j;
                break;
               
            }else if(arr[mid]<target){
                l=mid+1;
            }else{
                h=mid-1;
            }
        }
        return res;

        
    }
};