class Solution {
public:
    int myAtoi(string s) {
        long result = 0;
        bool isNegative = 0;
        bool firstDigit = 0, firstSign = 0;
        for (int i = 0; i < s.length(); i ++)
        {
            if ((s[i] >= '0' && s[i] <= '9') ||
                s[i] == '+' ||
                s[i] == '-' ||
                s[i] == ' ')
            {
                if (s[i] == ' ')
                {
                    if (firstSign || firstDigit)
                        break;
                    continue;
                }
                else if (s[i] == '-')
                {
                    if (firstSign || firstDigit)
                        break;
                    isNegative = 1;
                    firstSign = 1;
                    continue;
                }
                else if (s[i] == '+')
                {
                    if (firstSign || firstDigit)
                        break;
                    isNegative = 0;
                    firstSign = 1;
                    continue;

                }
                firstDigit = 1;    
                result = result*10 + (s[i] - '0');
                if (result > INT_MAX)
                    return isNegative ? INT_MIN : INT_MAX;
            }
            else
                break;
        }
        return isNegative ? -result : result;
    }
};
