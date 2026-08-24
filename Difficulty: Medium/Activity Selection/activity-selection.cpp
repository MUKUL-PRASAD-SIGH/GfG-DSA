class Solution {
  public:
       // bool cmp(pair<int,int> a , pair<int,int> b){
         //   return a.second<b.second;
       // }
    int activitySelection(vector<int> &start, vector<int> &finish) {
        // code here
        vector<pair<int,int>> v;
        for(int i=0;i<start.size();i++){
            v.push_back({start[i], finish[i]});
            
        }
        
     sort(v.begin(), v.end(), [](const auto& a, const auto& b) {
     return a.second < b.second;
     });
        int ansEnd=v[0].second;
        int count=1;
        for(int i=1;i<start.size();i++){
            if(v[i].first>ansEnd)
            {count++;
            
            ansEnd=v[i].second;
            }
        }
        return count;
        
        
    }
};