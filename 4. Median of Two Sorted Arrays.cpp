class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        double median = 0;
        int m = nums1.size();
        int n = nums2.size();
        int mid = (m + n)/2;
        int i = 0, j = 0;
        int count = 0;
        vector<int> merg;

        while (count <= mid)
        {
            if (i == m)
                while (j < n && count <= mid)
                {
                    count ++;
                    merg.push_back(nums2[j++]);
                }
            if (j == n)
                while (i < m && count <= mid)
                {
                    count ++;
                    merg.push_back(nums1[i++]);
                }
            if (count > mid)
                break;
            if ( nums1[i] <= nums2[j] )
            {
                merg.push_back(nums1[i++]);
                count ++;
            }
            else
            {
                count ++;
                merg.push_back(nums2[j++]);
            }
        }
        if ((m + n)%2)
            median = merg[mid];
        else
        {
            median = merg[mid] + merg[mid - 1];
            median = median/2;
        }
        return median;
    }
};
