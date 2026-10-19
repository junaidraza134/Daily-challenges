class Solution(object):
    def reverseString(self, s):
        """
        :type s: List[str]
        :rtype: None Do not return anything, modify s in-place instead.
        """
        stack1=[]
        arr=[]
        for i in range(len(s)):
            stack1.append(s[i])
        for i in range(len(s)):
            s[i]=stack1.pop()
        print(s)
        
        
        