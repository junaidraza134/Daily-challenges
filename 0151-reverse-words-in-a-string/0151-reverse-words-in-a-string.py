class Solution(object):
    def reverseWords(self, s):
        """
        :type s: str
        :rtype: str
        """
        st=[]
        ans=""
        n=len(s)
        for i in range(n-1,-1,-1):
            if(s[i]!=" "):
                st.append(s[i])
            elif st:
                while(len(st)>0):
                    ans+=st.pop()
                ans+=" "
        while st:
            ans += st.pop()
        return ans.strip()
