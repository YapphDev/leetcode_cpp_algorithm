class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxArea = 0;
        int i = 0, n = height.size() - 1;
        if (n < 0)
            return 0;
        while (n > 0 && i < n)
        {
            if (height[i] < height[n])
            {
                if (maxArea < height[i]* (n - i))
                    maxArea = height[i]* (n - i);
                i++;
            }
            else
            {
                if (maxArea < height[n]* (n - i))
                    maxArea = height[n]* (n - i);
                n--;
            }
        }
        return maxArea;
    }
};
