class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size() - 1; 
        int mid = nums.size() / 2;

        while(left <= right)
        {
            mid = left + (right - left) / 2;
            if(nums[mid] == target)
                return mid; // target found

            if(nums[mid] < target)
            {
                left = mid + 1; // search in the right half
            }
            else
            {
                right = mid - 1; // search in the left half
            }
        }

        return -1;
    }
};
