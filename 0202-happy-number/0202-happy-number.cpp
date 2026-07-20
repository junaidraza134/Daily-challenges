class Solution {
public:
    bool isHappy(int n) {
        while(n!=1 && n!=4){
        int sq=0;
        while(n!=0){
            int dig=n%10;
            sq+=dig*dig;
            n/=10;
        }
         n=sq;
        }
       
        if(n==1) return true;
        return false;
    }
};