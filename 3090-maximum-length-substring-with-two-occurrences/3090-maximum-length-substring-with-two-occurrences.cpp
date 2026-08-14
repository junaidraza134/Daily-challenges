class Solution {
public:
    int maximumLengthSubstring(string s) {
        int n=s.length();
        unordered_map<char,int> mp;
        int left=0;
        int right=0;
        int maxx=0;
        while(right<n){
            mp[s[right]]++;
            while(mp[s[right]]>2){
                mp[s[left]]--;
                if(mp[s[left]]==0){
                    mp.erase(s[left]);
                }
                left++;
            }
            maxx=max(maxx,right-left+1);
            right++;
        }
        return maxx;
        
    }
};