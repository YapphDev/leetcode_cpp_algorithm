class Solution {
public:
    int reverse(int x) {
        int eq = x;
        int red = 0;
        long result = 0;

        while (eq)
        {
            red = eq%10;
            eq = eq/10;
            
            result = result*10 + red;
            if (INT_MAX <= result || result <= INT_MIN)
                return 0;
            if (eq == 0)
                return result;
        }
        return result;
    }
};
