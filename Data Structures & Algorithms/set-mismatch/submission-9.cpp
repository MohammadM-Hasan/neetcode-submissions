class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int> result;
        
        int n = nums.size();
        vector<int> count(n + 1 , 0);

        for(int num : nums)
        {
            count[num]++;
        }

        int missing;
        int dup;

        for(int i = 1 ; i <= n ; i++)
        {
            if(count[i] == 0)
                missing = i;
            
            if(count[i] == 2)
                dup = i;
        }

        result.push_back(dup);
        result.push_back(missing);

        return result;
    }
};