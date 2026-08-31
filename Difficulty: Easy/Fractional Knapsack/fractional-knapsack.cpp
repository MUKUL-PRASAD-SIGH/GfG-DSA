class Solution {
  public:
 
    double fractionalKnapsack(vector<int>& val, vector<int>& wt, int capacity) {
        // code here
      
        vector<pair<double,int>> items;
        for(int i=0;i<val.size();i++) items.push_back({(double)val[i]/wt[i],i});
        
        sort(items.rbegin(), items.rend());
        double ans=0.0;
        for(auto item:items){
            int i=item.second;
            if(capacity>=wt[i]){
                ans+=val[i];
                capacity-=wt[i];
                
            }
            else {
                ans+=item.first*capacity;
                break;
            }
                
        }
        return ans;
    }
};
