class Solution {
  public:
      int maxChildren(vector<int> &greed, vector<int> &cookie) {

          sort(greed.begin(), greed.end());
          sort(cookie.begin(), cookie.end());

          int count = 0;
          int j = 0;

          for (int i = 0; i < greed.size() && j < cookie.size(); i++) {

              while (j < cookie.size() && cookie[j] < greed[i]) {
                  j++;
              }

              if (j < cookie.size()) {
                  count++;
                  j++;
              }
          }

          return count;
      }
  };