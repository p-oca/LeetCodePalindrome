#include <vector>

class Solution {
public:
    bool isPalindrome(int x) {
        if ((x < 0) || ((x != 0) && (x % 10 == 0))) // check for negative or the number 10
            return false;
        else { // valid case
            vector<int> digits;
            if (x == 0) // accept 0
                return true;
            else { // non-0 case
                while (x > 0) { // begin loading x into a string digit-by-digit
                    digits.insert(digits.begin(), x % 10);
                    x /= 10;
                }
                vector<int>::iterator j = digits.end() - 1; // initialise j at last element in vector
                for (vector<int>::iterator i = digits.begin(); i != digits.end(); i++) { // iterate through vector
                    if (*i != *j) // check if value at element i is not equal to element j
                        return false;
                    j--; // reverse iterate
                }
                return true; // return true in the event no non-palindromic elements have been found
            }
        }
    }
};
