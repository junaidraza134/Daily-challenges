class Solution(object):
    def isValid(self, s):
        """
        :type s: str
        :rtype: bool
        """
        st=[]
        for i in s:
            if(i=='(' or i=='[' or i=='{'):
                st.append(i)
            elif(len(st)==0):
                return False
            else:
                top=st[-1]
                st.pop()
                if(i==')' and top!='('):
                    return False
                if(i==']' and top!='['):
                    return False
                if(i=='}' and top!='{'):
                    return False
        return len(st)==0


        