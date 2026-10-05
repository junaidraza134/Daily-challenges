class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        int n=A.size();
        unordered_map<int,int> mp;
        int common=0;
        vector<int> ans;
        for(int i=0;i<n;i++){
            mp[A[i]]++;
            if(mp[A[i]]==2){
                common++;
            }
            mp[B[i]]++;
            if(mp[B[i]]==2){
                common++;
            }
            ans.push_back(common);

        }
        return ans;
        
        
    }
};