class Solution {
public:
    string reverseWords(string s) {
        int n=s.length();
        stack<char> st;
        string ans="";
        for(int i=n-1;i>=0;i--){
            if(s[i]==' ') continue;
            while(i>=0 && s[i]!=' '){
                st.push(s[i]);
                i--;
            }
            while(!st.empty()){
                ans+=st.top();
                st.pop();
            }
            ans+=' ';
        }
        ans.pop_back();
        return ans;
        
    }
};