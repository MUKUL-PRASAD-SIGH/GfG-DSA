class Solution {
public:
    struct Child {
        int rating;
        int index;
    };

    int minCandy(vector<int>& arr) {
        int n = arr.size();

        vector<Child> v;

        for (int i = 0; i < n; i++) {
            v.push_back({arr[i], i});
        }

        sort(v.begin(), v.end(), [](const Child& a, const Child& b) {
            return a.rating < b.rating;
        });

        vector<int> candy(n, 1);

        for (auto child : v) {
            int i = child.index;

            if (i > 0 && arr[i] > arr[i - 1]) {
                candy[i] = max(candy[i], candy[i - 1] + 1);
            }

            if (i < n - 1 && arr[i] > arr[i + 1]) {
                candy[i] = max(candy[i], candy[i + 1] + 1);
            }
        }

        int ans = 0;

        for (int x : candy) {
            ans += x;
        }

        return ans;
    }
};