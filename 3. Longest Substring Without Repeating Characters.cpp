class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int longest = 0, i = 0 ,tmp = 0;
        vector<int> str;
        for (i = 0 ;i <s.length(); i++)
        { 
            auto result = find(str.begin(), str.end(), s[i]);
            if (result != str.end() )
            {
                if (longest < str.size())
                    longest = str.size();
                str.erase(str.begin(), result+1);
            }
                str.push_back(s[i]);
        }
        if (longest < str.size())
            longest = str.size();
        return longest;
        
    }
};
