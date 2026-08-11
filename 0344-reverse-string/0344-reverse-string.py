class Solution(object):
    def reverseString(self, s):
        """
        :type s: List[str]
        :rtype: None Do not return anything, modify s in-place instead.
        """
        st=[]
        for i in s:
            st.append(i)
        
        for i in range(len(s)):
            s[i]=st[-1]
            st.pop()
        