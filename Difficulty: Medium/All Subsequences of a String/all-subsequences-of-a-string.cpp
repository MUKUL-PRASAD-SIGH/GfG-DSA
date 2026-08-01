class Solution {
  public:
    vector<string> powerSet(string &s) {
        string curr = "";
        int n = s.size();
        vector<string> ans;

        helper(0, s, curr, n, ans);

        sort(ans.begin(), ans.end());
        return ans;
    }

    void helper(int index, string &s, string &curr, int n, vector<string> &ans)
    {
        if(index == n)
        {
            ans.push_back(curr);
            return;
        }

        // Include current character
        curr.push_back(s[index]);
        helper(index + 1, s, curr, n, ans);

        // Exclude current character
        curr.pop_back();
        helper(index + 1, s, curr, n, ans);
    }
};