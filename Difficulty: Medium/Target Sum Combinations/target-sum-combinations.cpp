class Solution {
  public:
    vector<vector<int>> targetSumComb(vector<int> &arr, int target) {
        vector<vector<int>> ans;
        vector<int> res;
        int i;
       

        helper(0,arr,res,target,ans);
        return ans;
    }
    void helper(int i,vector<int>& arr,vector<int>& res, int target,vector<vector<int>>& ans)
    {
        if(i==arr.size()){
            if(target==0){
                ans.push_back(res);
            }
            return;
        }
        if(target>0){
        res.push_back(arr[i]);
        helper(i,arr,res,target-arr[i],ans);
        //sum+=candidates[i];
        res.pop_back();
        
        //sum-=candidates[i];
        
        }
helper(i+1,arr,res,target,ans);
    }
};