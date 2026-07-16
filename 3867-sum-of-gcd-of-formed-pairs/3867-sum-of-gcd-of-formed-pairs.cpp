class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        int n=nums.size();
        vector<int> prefixgcd(n);
        int maxx=0;
        for(int i=0;i<n;i++){
            maxx=max(maxx,nums[i]);
            prefixgcd[i]=gcd(maxx,nums[i]);
        }
        sort(prefixgcd.begin(),prefixgcd.end());
        int m=prefixgcd.size();
        int l=0;
        int h=m-1;
        long long sum=0;
        while(l<h){
            sum+=gcd(prefixgcd[l],prefixgcd[h]);
            l++;
            h--;
            
        }
        return sum;
    }
};