class Solution {
public:
    bool isPalindrome(int x) {
        long eq = x;
        long revert = 0;
        if (x < 0)
            return false;
        while (eq)
        {
            revert = revert*10 + eq%10;
            eq = eq/10;
            if (INT_MAX <= revert)
                return false;
        }
        return revert == x ? true : false;
    }
};
