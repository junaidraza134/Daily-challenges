class Solution {
public:
    string smallestPalindrome(string s) {
        int n=s.length();
        string left="";
        string middle="";
        if(n==1) return s;
        unordered_map<char,int> mp;
        for(char ch:s){
            mp[ch]++;
        }
        for(char i='a';i<='z';i++){
            while(mp[i]>=2){
                left+=i;
                mp[i]-=2;
            }
            if(mp[i]==1){
                middle+=i;
            }
        }
        string res=left;
        reverse(res.begin(),res.end());
        return left+middle+res;
    }
};