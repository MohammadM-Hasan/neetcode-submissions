class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int , int> prefixSum;
        prefixSum[0]++;

        int res = 0;
        int sum = 0;
        int totalSum = 0;

        for(int num : nums)
        {
            totalSum += num;
            sum = totalSum - k;

            if(prefixSum[sum] > 0)
            {
                res += prefixSum[sum];
            }

            prefixSum[totalSum]++;
        }

        return res;
    }
};