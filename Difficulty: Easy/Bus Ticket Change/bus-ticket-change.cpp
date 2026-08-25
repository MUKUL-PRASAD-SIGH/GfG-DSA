class Solution {
public:
    bool canServe(vector<int> &arr) {

        int five = 0;
        int ten = 0;

        for (int i = 0; i < arr.size(); i++) {

            if (arr[i] == 5) {
                five++;
            }

            else if (arr[i] == 10) {
                if (five == 0)
                    return false;

                five--;
                ten++;
            }

            else { // 20

                // Prefer 10 + 5
                if (ten > 0 && five > 0) {
                    ten--;
                    five--;
                }

                // Otherwise use 3 five-dollar bills
                else if (five >= 3) {
                    five -= 3;
                }

                else {
                    return false;
                }
            }
        }

        return true;
    }
};