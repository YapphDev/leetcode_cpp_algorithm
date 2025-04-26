class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows == 1)
            return s;
        int step = 2*numRows - 2;
        string convert; 
        for (int i = 0; i < numRows; i++)
        {   
            for (int j = i; j < s.length(); j+=step)
            {
                convert.push_back (s[j]);
                if (0 < i && i < numRows - 1 &&
                    j + step - 2*i < s.length())
                    convert.push_back(s[j + step - 2*i]);
            }
        }
        return convert;
    }
};
