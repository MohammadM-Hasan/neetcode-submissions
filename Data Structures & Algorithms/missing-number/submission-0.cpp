class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int zeroToN = 0;
        int result = 0;

        for(int i = 0 ; i <= nums.size() ; i++)
        {
            zeroToN ^= i;
        }

        for(int num : nums)
        {
            result ^= num;
        }

        

        return zeroToN ^ result;
    }
};
