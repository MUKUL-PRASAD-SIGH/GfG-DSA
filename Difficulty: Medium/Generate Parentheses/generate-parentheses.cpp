class Solution {
public:
    void solve(int i, int pairs, int open, int close,
               string &cur, vector<string> &res) {

        if (i == 2 * pairs) {
            res.push_back(cur);
            return;
        }

        if (open < pairs) {
            cur.push_back('(');
            solve(i + 1, pairs, open + 1, close, cur, res);
            cur.pop_back();
        }

        if (close < open) {
            cur.push_back(')');
            solve(i + 1, pairs, open, close + 1, cur, res);
            cur.pop_back();
        }
    }

    vector<string> generateParentheses(int n) {
        vector<string> res;
        string cur;
        solve(0, n / 2, 0, 0, cur, res);
        return res;
    }
};