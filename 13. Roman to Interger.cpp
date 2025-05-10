class Solution {
public:
    int romanToInt(string s) {
        int ret = 0;
        unordered_map<char,int> romanToInt = {{'Z',0},
                                    {'I',1},
                                    {'V',5},
                                    {'X',10},
                                    {'L',50},
                                    {'C',100},
                                    {'D',500},
                                    {'M',1000}};
        int pre = romanToInt['Z'];

        for (int i = s.length() - 1; i > -1; i--)
        {
            if (pre <= romanToInt [s[i]])
                ret += romanToInt [s[i]];
            else
                ret -= romanToInt [s[i]];
            pre = romanToInt [s[i]];
        }
        return ret;
    }
};
