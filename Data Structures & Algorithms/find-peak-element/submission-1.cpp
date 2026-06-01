class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int left = 0 , right = nums.size() - 1;

        while(left < right)
        {
            int middle = left + (right - left) / 2;

            if(nums[middle] < nums[middle + 1])
            {
                // go right (peak in the right)
                left = middle + 1;
            }
            else
            {
                // go left (peak in the left)
                right = middle;
            }
        }

        return left;
    }
};