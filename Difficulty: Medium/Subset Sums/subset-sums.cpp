class Solution {
  public:
    vector<int> subsetSums(vector<int>& arr) {
        // code here
        int i;
        vector<int> total;
        
        int sum=0;
    
        helper(0,arr,total,sum);
        return total;
        
        
    }
    void helper(int i,vector<int>& arr,vector<int> &total,int sum)
    {
        if(i==arr.size())
        {
            total.push_back(sum);
            return;
        }
        sum+=arr[i];
        
        helper(i+1,arr,total,sum);
        sum-=arr[i];
        
        helper(i+1,arr,total,sum);
        
    }
};