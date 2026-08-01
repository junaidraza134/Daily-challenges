class Solution:
    def solve(self,text1,text2,i,j,dp):
        if(i<0 or j<0):
            return 0
        if(dp[i][j]!=-1):
            return dp[i][j]
        if(text1[i]==text2[j]):
            dp[i][j]=1+self.solve(text1,text2,i-1,j-1,dp)
            return dp[i][j]
        else:
            a=self.solve(text1,text2,i-1,j,dp)
            b=self.solve(text1,text2,i,j-1,dp)
            dp[i][j]=max(a,b)
            return dp[i][j]
            


    def longestCommonSubsequence(self, text1: str, text2: str) -> int:
        n1=len(text1)
        n2=len(text2)
        dp=[]
        for i in range(n1):
            row=[]
            for j in range(n2):
                row.append(-1)
            dp.append(row)
        return self.solve(text1,text2,n1-1,n2-1,dp)
