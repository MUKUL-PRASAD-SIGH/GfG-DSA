class Solution {
  public:
    vector<vector<int>> findSubsets(vector<int>& arr) {
        vector<vector<int>> ans;
        vector<int> res;
        int i;
       sort(arr.begin(), arr.end());

        helper(0,arr,res,ans);
        return ans;
    }
    
    void helper(int i, vector<int>& arr, vector<int>& res,
         vector<vector<int>>& ans) {

    

    ans.push_back(res);
    for(int j = i; j < arr.size(); j++) {

        if(j > i && arr[j] == arr[j-1])
            continue;

        

        res.push_back(arr[j]);
        helper(j + 1, arr, res, ans);
        res.pop_back();
        
    }
    
}
};