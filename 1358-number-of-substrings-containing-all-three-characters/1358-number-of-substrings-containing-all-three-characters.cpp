class Solution {
public:
    int numberOfSubstrings(string s) {
        int n=s.length();
        int left=0;
        int right=0;
        unordered_map<char,int> mp;
        int count=0;
        while(right<n){
            mp[s[right]]++;
            while(mp['a']>0 && mp['b']>0 && mp['c']>0){
                count+=(n-right);
                mp[s[left]]--;
                if(mp[s[left]]==0){
                    mp.erase(mp[s[left]]);
                }
               left++;
            }
            right++;
        }
           
        
        return count;
        
    }
};