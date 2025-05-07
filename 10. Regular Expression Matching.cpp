class Solution {
public:
    bool isMatch(string s, string p) {
        int m = s.length(), n = p.length();
        int i = -1;
        while (m-- && n--)
        {
            i++ ;
             cout << s[i] << " " << p[i] << "\n";
            if (s[i] == p[i] || p[i] == '.')
            {

            }
            else if (p[i] == '*')
            {
                cout << "13\n";
                return true;
            }
            else
            {
                cout << "18\n";
                return false;
            }
        }
        if (m != n)
        {
            cout << "24\n";
            return false;
        }
        return true;
    }
};
