class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& arr) {
        int n=arr.size();
        sort(arr.begin(),arr.end());
        vector<vector<int>> merg;
        for(int i=0;i<n;i++){
            if(merg.empty() || arr[i][0]>merg.back()[1]){
                merg.push_back(arr[i]);
            }else{
                merg.back()[1]=max(arr[i][1],merg.back()[1]);
            }
        }
        return merg;
        
    }
};