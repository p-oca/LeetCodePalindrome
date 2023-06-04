#include <vector>

class Solution {
public:
    bool isPalindrome(int x) {
        if ((x < 0) || ((x != 0) && (x % 10 == 0)))
            return false;
        else {
            vector<int> digits;
            if (x == 0)
                return true;
            else {
                while (x > 0) {
                    digits.insert(digits.begin(), x % 10);
                    x /= 10;
                }
                vector<int>::iterator j = digits.end() - 1;
                for (vector<int>::iterator i = digits.begin(); i != digits.end(); i++) {
                    if (*i != *j)
                        return false;
                    j--;
                }
                return true;
            }
        }
    }
};
