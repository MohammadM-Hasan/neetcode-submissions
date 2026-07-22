class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int res = 1;
        int maxIncreasing = 1;
        int maxDecreasing = 1;

        for(int i = 0 ; i < nums.size() - 1; i++)
        {
            if(nums[i] < nums[i + 1]) // increasing
            {
                maxIncreasing++;
                maxDecreasing = 1;
            }
            else if(nums[i] > nums[i + 1]) // decreasing
            {
                maxDecreasing++;
                maxIncreasing = 1;
            }
            else
            {
                maxDecreasing = 1;
                maxIncreasing = 1;
            }
            res = max(res, max(maxIncreasing , maxDecreasing));
        }


        return res;
    }
};