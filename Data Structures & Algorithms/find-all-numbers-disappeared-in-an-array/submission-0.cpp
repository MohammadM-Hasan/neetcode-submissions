class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> occurrence(nums.size() , 0);
        vector<int> result;

        for(int num : nums)
        {
            occurrence[num - 1]++;
        }

        for(int i = 0 ; i < occurrence.size() ;i++)
        {
            if(occurrence[i] == 0)
            {
                result.push_back(i+1);
            }
        }

        return result;
    }
};