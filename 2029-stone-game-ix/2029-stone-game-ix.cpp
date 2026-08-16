class Solution {
public:
    bool stoneGameIX(vector<int>& stones) {
        int n=stones.size();
        vector<int> cnt(3,0);
        for(int i=0;i<n;i++){
            cnt[stones[i]%3]++;
        }
        int a=cnt[1];
        int b=cnt[2];
        int c=cnt[0];
        if(c%2==0){
            return a>0 && b>0;
        }
        return abs(a-b)>2;
        
    }
};