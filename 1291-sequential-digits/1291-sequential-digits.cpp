class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        int dig1=0;
        int l=low;
        int h=high;
        while(l>0){
            l/=10;
            dig1++;
         
        }
        int dig2=0;
         while(h>0){
            h/=10;
            dig2++;
         
        }

        string s="123456789";
       
        vector<int> res;
        for(int i=dig1;i<=dig2;i++){
             int left=0;
        while(left+i<=s.length()){
            int tmp=stoi(s.substr(left,i));
            if(tmp>=low && tmp<=high){
                res.push_back(tmp);
            }
            left++;
        
            }
        }
        return res;
        
        
    }
};