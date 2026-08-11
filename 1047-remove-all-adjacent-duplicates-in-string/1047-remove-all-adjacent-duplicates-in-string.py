class Solution(object):
    def removeDuplicates(self, s):
        """
        :type s: str
        :rtype: str
        """
        st=[]
        ans=""
        for i in s:
            if(len(st)>0 and st[-1]==i):
                st.pop()
            else:
                st.append(i)
        while(len(st)>0):
            ans+=st[-1]
            st.pop()
        ans=ans[::-1]
        return ans
        