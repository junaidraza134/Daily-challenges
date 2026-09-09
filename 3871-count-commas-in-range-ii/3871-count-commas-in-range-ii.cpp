class Solution {
public:
    long long countCommas(long long n) {
        long long  count=1000;
        long long res=0;

        while(count<=n){
            res+=n-count+1;
            count*=1000;
        }
        return res;
    }
};