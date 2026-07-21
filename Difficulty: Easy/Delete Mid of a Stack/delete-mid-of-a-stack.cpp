class Solution {
  public:
    
    void solve(stack<int>& s, int k)
{
    if(k == 0)
    {
        s.pop();
        return;
    }

    int x = s.top();
    s.pop();

    solve(s, k-1);

    s.push(x);
}
    // Function to delete middle element of a stack.
    void deleteMid(stack<int>& s) {
        // code here..
        
        int k = (s.size()%2==0) ?s.size()/2:(s.size()-1)/2;
        solve(s, k);
        
        
        
        
    }
    
};