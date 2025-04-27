class Solution {
public:
    int reverse(int x) {
        vector<int> arr;
        int eq = x;
        int red = 0;
        int count = 0;
        int result = 0;
        int i = 0;

        while (eq)
        {
            red = eq%10;
            eq = eq/10;
            
            arr.push_back(red);
            count++;
            if (eq == 0)
                break;
        }
        if (count == 10 && 
            ((abs(arr[0]) > 2) ||
             (abs(arr[0]) == 2 && abs(arr[1]) > 1) ||
             (abs(arr[1]) == 1 && abs(arr[2]) > 4) ||
             (abs(arr[2]) == 4 && abs(arr[3]) > 7) ||
             (abs(arr[3]) == 7 && abs(arr[4]) > 4) ||
             (abs(arr[4]) == 4 && abs(arr[5]) > 8) ||
             (abs(arr[5]) == 8 && abs(arr[6]) > 3) ||
             (abs(arr[6]) == 3 && abs(arr[7]) > 6) ||
             (abs(arr[7]) == 6 && abs(arr[8]) > 4) ||
             (abs(arr[8]) == 4 && abs(arr[9]) > 8)))
            return 0;
        while (count)
        {   
            result += arr[i++]*pow(10,--count);
        }

        return result;
    }
};
