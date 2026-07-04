class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        
        vector<int> positiveNumbers;
        vector<int> negativeNumbers;

        for (int num : nums) {
            if (num > 0)
                positiveNumbers.push_back(num);
            else
                negativeNumbers.push_back(num);
        }

        vector<int> result(nums.size());
        int p = 0 , n = 0;

        for(int i = 0 ; i < nums.size() ; i++)
        {
            if(i %2 == 0)
                result[i] = positiveNumbers[p++];
            else
                result[i] = negativeNumbers[n++];
        }

        return result;
    }
};