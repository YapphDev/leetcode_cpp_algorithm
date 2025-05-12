class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int left = 0, right = 0, threeSum = 0;
        vector<vector<int>> result;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size() - 2; i++)
        {
            if (i > 0 && nums[i] == nums[i-1])
                continue;
            left = i + 1;
            right = nums.size() - 1;
            while ( left < right)
            {   
                threeSum = nums[i] + nums[left] + nums[right];
                if (threeSum == 0)
                {
                    result.push_back ({nums[i], nums[left], nums[right]});
                    right--;
                    left++;
                    while (left < right && nums[left] == nums[left - 1]) left++;
                    while (left < right && nums[right] == nums[right + 1]) right--;
                }
                else if (threeSum < 0)
                    left++;
                else if (threeSum > 0)
                    right--;
            }
            
        }
        return result;
    }
};
