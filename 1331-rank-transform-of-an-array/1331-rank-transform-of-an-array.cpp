class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        int n=arr.size();
        vector<int> dummy=arr;
        sort(arr.begin(),arr.end());
        unordered_map<int,int> mp;
        int ind=1;
        for(int i=0;i<arr.size();i++){
            if(mp.find(arr[i])==mp.end(arr[i])){
                mp[arr[i]]=ind++;
            }
        }
        for(int i=0;i<dummy.size();i++){
            dummy[i]=mp[dummy[i]];
        }
        return dummy;



       


    }
};